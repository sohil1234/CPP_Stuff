#include <iostream>

using namespace std;

// Complexities :-

// Maximum subarray sum

int main(void){

    int a[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int best = 0;
    int sum = 0;
    for (int i = 1; i < n; i++){
        sum = max(a[i], sum + a[i]);
        best = max(best, sum);
    }

}

// Sorting
/*
    Bubble sort :is an example of a sorting algorithm that always swaps consecutive
elements in the array. It turns out that the time complexity of such an algorithm
is always at least O(n2), because in the worst case, O(n2) swaps are required for
sorting the array.

The number of inversions indicates how much work is needed to sort the array.
An array is completely sorted when there are no inversions. 
On the other hand, if the array elements are in the reverse order, the number of inversions is the largest possible:
*/


void bubble_sort(int a[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <n-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

/*
    Merge sort
*/

void merge_sort(int a[], int l, int r, int m){
    int const left = m - l + 1;
    int const right = r - m;
    int L[left], R[right];
    
    for (int i = 0; i < left; i++){
      L[i] = a[l+1];
    }
    for (int i = 0; i < right; i++){
      R[i] = a[r+1+i];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = l;
    while (i < left && j < right) {
      if (L[i] <= R[j]) {
        a[k] = L[i];
        i++;
      } else {
        a[k] = R[j];
        j++;
      }
      k++;
    }
    
    while (i < left) {
      a[k] = L[i];
      i++;
      k++;
    }

    while (j < right) {
      a[k] = R[j];
      j++;
      k++;
    }

    
    
}