// Title: Merge
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(m+n)
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Cho 2 mảng A và B có lần lượt là m và n phần tử, hai mảng đã được sắp xếp theo thứ tự không tăng. Mảng C
 * là mảng tổng hợp của A và B, nói cách khác C=A+B.
 *
 * Yêu cầu: Hãy tìm giá trị nhỏ thứ k trong mảng C, k được tính từ 0.
 *
 * Input:
 * Dòng đầu gồm m, n, k (1≤m,n≤10000, 0≤k<m+n) lần lượt là số phần tử mảng A, B và phần tử nhỏ thứ k cần tìm.
 * Dòng thứ hai gồm m số nguyên ai(1≤ai≤10000) của mảng A.
 * Dòng thứ ba gồm n số nguyên bj(1≤bj≤10000) của mảng B.
 *
 * Output:
 * Gồm 1 số nguyên duy nhất là giá trị của số nhỏ thứ k trong mảng C.
 *
 * Example 1:
 * Input:
 * 5 4 2
 * 9 7 6 4 1
 * 12 9 3 2
 *
 * Output:
 * 3
 **/

#include <iostream>

using namespace std;

int m, n, k;
int arr1[10001], arr2[10001];

int merge(int m, int arr1[], int n, int arr2[], int k)
{
    int i = m - 1;
    int j = n - 1;
    int cnt = 0;

    while (i >= 0 && j >= 0)
    {
        int temp;
        if (arr1[i] < arr2[j])
        {
            temp = arr1[i];
            i--;
        }
        else
        {
            temp = arr2[j];
            j--;
        }

        if (cnt++ == k)
        {
            return temp;
        }
    }

    while (i >= 0)
    {
        int temp = arr1[i--];
        if (cnt++ == k)
        {
            return temp;
        }
    }

    while (j >= 0)
    {
        int temp = arr2[j--];
        if (cnt++ == k)
        {
            return temp;
        }
    }
}

int main()
{
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    cout << merge(m, arr1, n, arr2, k);
    return 0;
}