// Title: Find Element
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Array

/**
 * Cho một mảng các số nguyên theo thứ tự tăng dần có N phần tử (N≤10^5) và một số nguyên x (∣x∣≤10^9), tìm vị trí xuất hiện
 * của x trong mảng (vị trí bắt đầu từ 1).
 *
 * Input:
 * Dòng đầu tiên gồm N (1<N≤10^5) và x (∣x∣≤10^9). Với N là số lượng phần tử của mảng, x là số nguyên cần tìm vị trí trong mảng.
 * Dòng tiếp theo là một mảng có N các số nguyên theo thứ tự tăng dần.
 *
 * Output:
 * In ra vị trí của x (vị trí bắt đầu từ 1) trong mảng, nếu không tìm thấy x thì in ra “-1” (không bao gồm dấu nháy kép).
 *
 * Example 1:
 * Input:
 * 5 3
 * -1 0 2 3 9
 *
 * Output:
 * 4
 *
 * Example 2:
 * Input:
 * 6 1000
 * 5 9 12 25 100 650
 *
 * Output:
 * -1
 **/

#include <iostream>

using namespace std;

int main()
{
    int n, x, arr[100000];
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i + 1;
            break;
        }
    }

    cout << index;
    return 0;
}