//floor of element is largest elemnt  which is lesser or equal to key, uske equal ya usse just chhota element present in array
 // eg  1 2 4 8 10 10 12    9 ka floor 8 h ,10 ka floor 10 h ,  12 ka floor ,7 ka floor 4 h   

 //ceil of elemnt is smallest elemnt which is greater or equal to key
 //eg  1  2 4 8 10 10 12  9 ka ceil 10 h ,2 ka ceil 2 h is array me 

#include<bits/stdc++.h>
using namespace std;

int floor(int a[],int n ,int k)
{
        int end = n-1;
        int start  = 0;
        int floor = -1;//index dena h
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            if(a[mid] == k)
            {
                floor = mid;  //possible answer ho skta h
                start = mid+1; //for multiple occurence
            }
            else if(a[mid] > k)  //agr given element less ho k se toh left part me srch krenge
            {
              end = mid -1;  
            }
            else if(a[mid] < k)  //agr a[mid] less than a[mid] se toh yh possible answer ho skta h isko store krke right me dhundenge
            {
                floor = mid;  //possible answer h then space mmoves to right greater than it
                start = mid + 1;
            }
        }
        
        return floor;
}


int ceil(int a[],int n, int k)
{
        int end = n-1;
        int start  = 0;
        int ceil = -1;//index dena h
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            if(a[mid] == k)
            {
                ceil = mid;
                end = mid-1;
            }
            else if(a[mid] > k)
            {
              ceil = mid;
              end = mid - 1;
            }
            else
            {
              start = mid +1;
            }
        }
        
        return ceil;
}

int main()
{
    int a[] = { 1,2,4,8,10,10,12};  //for multiple occurences of floor return last occurence index
    int n = sizeof(a)/sizeof(a[0]);
    int k ;
    cin>>k;
    cout<<floor(a,n,k)<<endl;
    cout<<ceil(a,n,k)<<endl;

    return 0;
}