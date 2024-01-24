// Title: Prime Sort
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity:
// Topic:

/**
 * Sắp xếp mảng tăng dần các số nguyên, nhưng các số nguyên tố vẫn giữ nguyên vị trí.
 * Số nguyên tố là số tự nhiên chỉ có hai ước số nguyên dương là 1 và chính nó.
 * 
 * Input:
 * Dòng thứ nhất là số phần tử của mảng N (1≤N≤10^​3).
 * Dòng thứ hai là N số nguyên Ai(0≤i<N,∣A​i∣≤10^6).
 * 
 * Output:
 * Một dòng duy nhất gồm N phần tử của mảng sau khi đã sắp xếp tăng dần nhưng các số nguyên tố vẫn giữ nguyên vị trí.
 * 
 * Example 1:
 * Input:
 * 5
 * 4 6 3 1 2
 * 
 * Output:
 * 1 4 3 6 2 
 **/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < (int)sqrt(n) + 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void merge(int n1, int L[], int n2, int R[], int a[])
{
    int inf = 1000001;
    L[n1] = inf;
    R[n2] = inf;

    int i, j, k;
    i = j = k = 0;
    while (i < n1 || j < n2) {
        if (L[i] < R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
}

void mergeSort(int n, int a[])
{
    int L[501];
    int R[501];
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

int main(){
    int n;
    int a[1000];
    cin >> n;
    for(int i = 0 ; i < n ; i++){
      cin >> a[i];
    }

    int notPrime[1000];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (!isPrime(a[i])) {
            notPrime[k] = a[i];
            k++;
        }
    }
    mergeSort(k, notPrime);

    int j = 0;
    for(int i = 0 ; i < n; i++){
        if (!isPrime(a[i])) {
            cout << notPrime[j] << ' ';
            j++;
        }
        else {
            cout << a[i] << ' ' ;
        }
    }
    return 0;
}