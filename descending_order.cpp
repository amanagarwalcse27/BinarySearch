//agr elements descending order me sorted ho
#include<bits/stdc++.h>
using namespace std;

int  binary_search(int a[], int n ,int k )
    {
        
        int start = 0;
        int end = n-1;
        int ans = -1;
        
        //8 6 5 4 2 1
        
        while(start <= end)
        {
            int mid = start + (end -start)/2; //index btayega mid and in this form to prevent overflow
            
            if(a[mid] == k)
            {
                ans = mid;
                break; //break is necessary to avoid further iteration of loop
                
            }
               
            else if(a[mid] < k) //if mid value greater than required elemnt ignore right half
            {
              end = mid -1;  
            }
            else //if mid value less than required value value ignore left half
            {
               start = mid +1;                
            }
        }
        return ans ;
    }

    int main()
    {
        int a[] = {10,8,7,6,4,2};
        int n = sizeof(a)/sizeof(a[0]);
        int k  = 2;
        int ans = binary_search(a,n,k);
        cout<<ans<<endl;

        return 0;
    }