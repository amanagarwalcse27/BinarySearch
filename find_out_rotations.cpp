//kitni baar sorted array rotate kiya gya using binary search
//no of right rotations = index of smaller element, so we have to find minimum 
#include<bits/stdc++.h>
using namespace std;


//our task is to find smallest elemnt index
int rotations(int a[],int n)
{
    int start = 0;
    int end = n-1;
    int ans = 0;

    if(a[0] <= a[n-1])  //if already sorted h ascending order me toh minimum elemnt 0 pr hoga total rotations bhi 0
    {
        return 0;
    }

    while(start <= end)  //agr rotate hua toh 
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
    return ans;  //agr min elemnt chahiye toh a[ans] return krdo
}

int main()
{
    int a[] = {4,5,1,2,3};  //agr rotated h toh
    int n = sizeof(a)/sizeof(a[0]);

    int index = rotations(a,n);
    cout<<"Minimum element index is"<<index<<endl;

    return 0;
}

