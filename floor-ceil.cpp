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
                floor = mid;
                break;
            }
            else if(a[mid] > k)
            {
              end = mid -1;  
            }
            else
            {
                floor = mid;
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
                break;
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
    int a[] = { 1,2,4,8,10,12};
    int n = sizeof(a)/sizeof(a[0]);
    int k ;
    cin>>k;
    cout<<floor(a,n,k)<<endl;
    cout<<ceil(a,n,k)<<endl;

    return 0;
}