#include<bits/stdc++.h>
using namespace std;

int first_occurence(int a[],int n,int k)
{
    int start = 0;
    int end = n-1;
    int first = -1;

    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(a[mid] == k)
        {
            first = mid; //mid store krdenge first me
            end = mid-1; //search space ko left side me move krdenge
        }
        
        else if(a[mid] < k)
        {
            start = mid+1; //search space ko right side me move krdenge  
        }

        else 
        {
            end = mid -1;
        }
    }
           return first;
}

// LAST OCCURENCE

int last_occurence(int a[],int n, int k)
{ 
    
    int start = 0;
    int  end = n-1;
    int last = -1;
   

  while(start<=end)
  {
    int mid = start + (end-start)/2;

    if(a[mid] == k)
    {
        last = mid; // mid store krenge last me
        start = mid+1; //search space ko right side me move krdenge because right side me or bhi occurence ho skti h
    }
    else if(a[mid] < k)
    {
        start = mid+1;
    }
    else 
    {
        end = mid - 1;
    }

  }
  return last;
}

int main()
{
    int a[] = {1,4,4,4,};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 4;
    int first = first_occurence(a,n,k);
    int last = last_occurence(a,n,k);

    int total_occurence = last - first + 1;

    cout<<"First Occurence of "<<k<<" is "<<first<<endl;
    cout<<"Last Occurence of "<<k<<" is "<<last<<endl;
    cout<<"total occurence of element is "<<total_occurence<<endl;

    return 0;
}    
    


