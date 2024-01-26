// Title: Median
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Cho số nguyên dương N và mảng một chiều gồm N số nguyên a​i. Hãy tìm giá trị trung vị của mảng đó.
 * 
 * Biết rằng: Trung vị (Median) trong mảng một chiều là phần tử có giá trị ở giữa trong mảng đã được sắp xếp.
 * Với trường hợp số lượng phần tử là chẵn thì ta lấy giá trị trung bình của hai phần tử giữa mảng làm Median.
 * 
 * Input:
 * Dòng đầu là số nguyên dương N (1≤N≤1000).
 * Dòng tiếp theo gồm N số nguyên ai (0≤a​i≤1000).
 * 
 * Output:
 * Một số duy nhất là số trung vị Median.
 * 
 * Example 1:
 * Input:
 * 5
 * 7 3 1 2 5
 * 
 * Output:
 * 3
 * 
 * Example 2:
 * Input:
 * 6
 * 9 3 7 2 1 4
 * 
 * Output:
 * 3.5
 **/

#include <iostream>

using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int cur = a[i];
        int pos = i;
        while (pos > 0 && cur < a[pos - 1]) {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = cur;
    }
}

int main() {
    int n;
    int a[1000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    insertionSort(a, n);
    if (n % 2 != 0) {
        cout << a[n / 2];
    } else {
        cout << (a[n / 2] + a[n / 2 - 1]) / 2.0;
    }
    return 0;
}
