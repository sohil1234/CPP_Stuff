#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/*
It is almost never a good idea to use a home-made sorting algorithm in a contest,
because there are good implementations available in programming languages.
For example, the C++ standard library contains the function sort that can be
easily used for sorting arrays and other data structures.
 */

int main(void){
  
  // using c++ sort function
  vector<int> v = {4,2,3,4,5,6,7};
  sort(v.begin(), v.end()); // default sorting order is increasing
  // for reverse order do following
  sort(v.rbeing(), v.rend());
  
  // An ordinary array can be sorted as follows :
  int n = 7; // array size
  int a[] = {1,2,3,4,2,3,4};
  sort(a, a+n); // we are providing sort function the pointer to first and last element in the array
  // the following sorts the string s
  string s = "monkey";
  sort(s.beign(),s.end());
  /*
  The function sort requires that a comparison operator is defined for the data
type of the elements to be sorted. When sorting, this operator will be used
whenever it is necessary to find out the order of two elements.
Most C++ data types have a built-in comparison operator, and elements
of those types can be sorted automatically. For example, numbers are sorted
according to their values and strings are sorted in alphabetical order.
Pairs (pair) are sorted primarily according to their first elements (first).
However, if the first elements of two pairs are equal, they are sorted according to
their second elements (second):
   */
  vector<pair<int, int>> v;
  v.push_back({1,5});
  v.push_back({2,3});
  v.push_back({1,2});
  sort(v.begin(), v.end());
  
  // Giving external comparision function
  bool comp(string a, string b){
    if (a.size() != b.size() return a.size() < b.size());
    return a < b;
  }
  sort(v.begin(), v.end(), comp);
  
  // User defined Structures
  /*
  User-defined structs do not have a comparison operator automatically. The
operator should be defined inside the struct as a function operator<, whose
parameter is another element of the same type. The operator should return true
if the element is smaller than the parameter, and false otherwise.
   */
  struct P {
    int x,y;
    bool operator<(const P &p){
      if (x != p.x) return x < p.x;
      else return y < p.y;
    }
  }
  
  // Binary Search
  
  /*
  The C++ standard library contains the following functions that are based on
  binary search and work in logarithmic time:
  • lower_bound returns a pointer to the first array element whose value is at
  least x.
  • upper_bound returns a pointer to the first array element whose value is
  larger than x.
  • equal_range returns both above pointers.
   */
//  The functions assume that the array is sorted. If there is no such element,
//  the pointer points to the element after the last array element. For example, the
//  following code finds out whether an array contains an element with value x:
  auto k = lower_bound(array,array+n,x)-array;
  if (k < n && array[k] == x) {
    // x found at index k   
    }
  auto a = lower_bound(array, array+n, x);
  auto b = upper_bound(array, array+n, x);
  cout << b-a << "\n";

  // using equal_range makes code shorter
  auto r = equal_range(array, array+n, x);
  cout << r.second-r.first << "\n";
  
  
  return 0;
}

