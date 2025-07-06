//finding peak elemnt 
//if array is sorted rotated there can be many peaks we can  return any one of these peaks

//if bitonic array there is only one peak element

//this method works on all type peak questions
#include <bits/stdc++.h>
using namespace std;

//method1 using binary search on answer
int peak_index(vector<int> &arr)
{
    int n = arr.size();

    // If there is only one element, then it's a peak
    if (n == 1) return 0;

    // Check if the first element is a peak
    if (arr[0] > arr[1]) 
    return 0;

    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) 
    return n - 1;

    // Binary search for a peak element
    int lo = 1, hi = n - 2;

    while (lo <= hi) 
    {
        int mid = lo + (hi - lo) / 2;

        // Check if mid is a peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) 
        {
            return mid;
        }

        // If the right neighbor is greater, move to the right half
        if (arr[mid] < arr[mid + 1]) 
        {
            lo = mid + 1;
        } 
        else 
        { // Move to the left half
            hi = mid - 1;
        }
    }

    return -1; // Return -1 if no peak is found
}

//method2 eliminating by different edge case check used in method1 .this method of peak works only in bitonic array only not on
int peak_index2(vector<int> &arr)
{
    int n = arr.size();
    int lo = 0;
    int hi = n-1;

    while (lo <= hi) 
    {
        int mid = hi + (lo - hi)/2;  //use end biased mid to eleminate test cases

        // Check if mid is a peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) 
        {
            return mid;
        }

        // If the right neighbor is greater, move to the right half
        if (arr[mid] < arr[mid + 1]) 
        {
            lo = mid + 1;
        } 
        else 
        { // Move to the left half
            hi = mid - 1;
        }
    }

    return -1; // Return -1 if no peak is found
}
int peak_index3(vector<int> &arr)
{
    int n = arr.size();
    int start = 0;
   int end = n - 1;

  while (start < end)
  {
      int mid = start + (end - start) / 2;

      // If mid element is greater than its neighbor, then it can be a peak
      if (arr[mid] > arr[mid + 1])
      {
          end = mid;
      } 
      else 
      {
          start = mid + 1;
      }
  }

  return start;
}

int main()
{
    vector<int> arr = {1,2,5,7,6,4,3};

    int result1 = peak_index(arr);
    cout<<result1<<endl;

    int result2 = peak_index2(arr);
    cout<<result2<<endl;

    int result3 = peak_index3(arr);
    cout<<result3<<endl;

    return 0;

}

