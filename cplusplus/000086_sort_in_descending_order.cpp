// Title: Sort In Descending Order
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Cho mảng một chiều các số nguyên. Hãy sắp xếp mảng giảm dần.
 * Mảng được sắp xếp giảm dần là mảng thỏa điều kiện sau:
 * Ai≥Ai+1 với 0≤i<N−1.
 * 
 * Input:
 * Dòng thứ nhất là số phần tử của mảng N (1≤N≤10^​5).
 * Dòng thứ hai là N số nguyên Ai (0≤i<N,∣Ai∣≤10^​9).
 * 
 * Output:
 * Một dòng duy nhất gồm N phần tử của mảng sau khi đã sắp xếp lại theo thứ tự giảm dần. Các phần tử cách nhau
 * bởi một khoảng trắng.
 * 
 * Example 1:
 * Input:
 * 5
 * 6 4 7 5 1
 * 
 * Output:
 * 7 6 5 4 1 
 **/

#include <iostream>

using namespace std;

int a[100000];
int n;
int inf = -1000000001;

void merge(int n1, int L[], int n2, int R[], int a[])
{
    L[n1] = inf;
    R[n2] = inf;

    int i, j, k;
    i = j = k = 0;
    while (i < n1 || j < n2) {
        if (L[i] > R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
}

void mergeSort(int n, int a[])
{
    int L[50001];
    int R[50001];

    if (n > 1) {
        int n1 = n / 2;
        int n2 = n - n1;
        for (int i = 0; i < n1; i++) {
            L[i] = a[i];
        }
        for (int i = 0; i < n2; i++) {
            R[i] = a[i + n1];
        }

        mergeSort(n1, L);
        mergeSort(n2, R);
        merge(n1, L, n2, R, a);
    }
}

void print(int a[] , int n){
   for(int i = 0 ; i < n; i++){
      cout << a[i] << " ";
   }
}

int main(){
   cin >> n;

   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }

   mergeSort(n, a);
   print(a, n);

   return 0;
}
