#include<bits/stdc++.h>
using namespace std;

//Lower bound means elemnt  greater than or equal to the given element(x) in array
//   lower bound >= x
//lower bound helps of x gives its first occurence
   

//upper bound means element  strictly greater than the given elemnt in array
// upper bound > x
//lower bound - 1 gives last occurence 

//if upper and lower bound equal then elemnt does not exist in array

//stl upper and lower bound functions return iterator to the elmnent 
// to get index  subtract the a.begin() or first iterator from lower and upper bound

// to get value of iterators use derefernce operator *

int main() 
{
    vector<int> v = {10, 20, 30, 40, 50};

    int val = 30;

    // Finding lower bound gives 
   // auto lb = lower_bound(v.begin(), v.end(), val); //gives iterator
  // *lb = gives value at corrospnding iterator
    int lb   =  lower_bound(v.begin(), v.end(), val) - v.begin();  //gives index
    
    

    // Finding upper bound
    //auto ub = upper_bound(v.begin(), v.end(), val);  //gives iterator
    int ub = upper_bound(v.begin(),v.end(),val) - v.begin();   //converts it to index

    cout << "Lower Bound of  val  is "<<v[lb]<<" is at index: "<<lb<<endl;

    cout << "Upper Bound of val is "<<v[ub]<<" is at index: "<<ub<< endl;

    return 0;
}