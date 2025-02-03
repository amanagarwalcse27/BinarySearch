//array given hoga ek key given hogi .find element with which difference of key is minimum
//1 approaches h ya toh ceil and floor wali approach .
//2 approach h 
#include<bits/stdc++.h>
using namespace std;
int min_difference_element(int a[],int n,int k)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(a[mid] == k)
        {
            return a[mid];
        }

        else if(a[mid] < k)
        {
            start = mid +1;
        }
        else 
        {
            end = mid -1;
        }
    }

    //handling out of bound problem
    if (start == 0) 
    {
        return a[start];
    } 
    else if (start == n) 
    {
        return a[start - 1];
    } 
    else
    {
        int diff1 = abs(k - a[start]);
        int diff2 = abs(k - a[start - 1]);

        if (diff1 > diff2) 
        {
            return a[start - 1];
        } 
        else 
        {
            return a[start];
        }
    }   


}

int main()
{
    int a[] = {1,3,5,6,9};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 10;
    int min_diff_element = min_difference_element(a,n,k);
    
    cout<<"minimum difference element "<<min_diff_element;

    return 0;

}
