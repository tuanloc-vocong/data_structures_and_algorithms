// Title: Sort In Ascending Order
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity:
// Topic:

/**
 * Cho mảng một chiều các số nguyên. Hãy sắp xếp mảng tăng dần.
 * Mảng được sắp xếp tăng dần là mảng thỏa điều kiện sau:
 * A≤A(i+1) với 0≤i<N−1.
 * 
 * Input:
 * Dòng thứ nhất là số phần tử của mảng N (1≤N≤1000).
 * Dòng thứ hai là N số nguyên A​i(0≤i<N,∣Ai∣≤109).
 * 
 * Output:
 * Một dòng duy nhất gồm N phần tử của mảng sau khi đã sắp xếp lại theo thứ tự tăng dần. Các phần tử
 * cách nhau bởi một khoảng trắng.
 * 
 * Example 1:
 * Input:
 * 5
 * 6 4 7 5 1
 * 
 * Output:
 * 1 4 5 6 7 
 **/

#include <iostream>
using namespace std;

int a[1000];
int n;

void insertionSort(int a[], int n) {
   for(int i = 1; i < n; i++) {
      int x = a[i];
      int j = i;
      while (j > 0 && a[j - 1] > x) {
         a[j] = a[j - 1];
         j--;
      }
      a[j] = x;
   }
}

void print(int a[] , int n){
   for(int i = 0; i < n; i++) {
      cout << a[i] << " ";
   }
}

int main() {
   cin >> n;
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   insertionSort(a,n);
   print(a,n);
   return 0;
}