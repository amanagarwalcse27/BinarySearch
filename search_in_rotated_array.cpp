#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& a, int target, int start, int end)  //binary search function in given range
{
   int l=start, r=end;
   while(l<=r)
   {
       int mid = (l+r)/2;
       if(a[mid] == target)
       {
           return mid;
       }
       else if(a[mid] > target)
       {
           r = mid-1;
       }
       else
       {
           l = mid+1;
       }
   }
   return -1;
}

int findMin(vector<int>& a) //function to get minimum elemnt index
{
   int n = a.size();
   int start = 0, end = n-1;
   int ans = 0; //minimum element ka index
   if(a[start] < a[end])
   {
       return 0;
   }
   while(start <= end)
   {
       int mid = start + (end - start)/2;
       if(a[0] <= a[mid])
       {
           start = mid+1;
       }
       else if(a[0] > a[mid])
       {
           ans = mid;
           end = mid-1;
       }
   } 
   return ans;
}      

int search(vector<int>& a, int target) 
{
   int n = a.size();
   int min_index = findMin(a);  //calling min_index to get index of minimum
   int a1 = BinarySearch(a , target, 0, min_index - 1); //recursive calls on left 
   int a2 = BinarySearch(a , target, min_index, n-1); //recursive calls on right

    if(a1 == -1)
    {
       return a2;
    }
   else
   {
       return a1;
   }
}

int main()
{
    vector<int> ans = {3,4,5,1,2};

    int target;
    cin>>target;
    int result = search(ans,target);
    cout<<result<<endl;

    return 0;
}