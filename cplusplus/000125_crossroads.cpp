// Title: Crossroads
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic: Matrix

/**
 * Biết rằng tai nạn sẽ xảy ra nếu xe đụng phải người đi bộ. Do đó chúng ta cần tránh sao cho đèn báo hiệu dành cho
 * người đi bộ của phần ngã tư bất kỳ không được bật lên cùng lúc với đèn xanh của làn xe có thể chạy qua phần ngã tư đó.
 *
 * Mr. Bean có nhiệm vụ điều kiển giao thông. Bạn hãy giúp cậu ấy kiểm tra xem liệu tai nạn có thể xảy ra hay không.
 *
 * Input:
 * Gồm 4 dòng tương ứng với 4 phần ngã tư theo thứ tự ngược chiều kim đồng hồ.
 * Mỗi dòng gồm 4 số nguyên l, s, r, p với 0 là đèn đỏ, 1 là đèn xanh.
 *
 * Output:
 * Một dòng duy nhất, in ra “YES” nếu tai nạn có thể xảy ra, ngược lại in ra “NO”. Không in cặp dấu “ “.
 *
 * Example 1:
 * Input:
 * 1 0 0 1
 * 0 1 0 0
 * 0 0 1 0
 * 0 0 0 1
 *
 * Output:
 * YES
 *
 * Example 2:
 * Input:
 * 0 1 1 0
 * 1 0 1 0
 * 1 1 0 0
 * 0 0 0 1
 *
 * Output:
 * NO
 *
 * Example 3:
 * Input:
 * 1 0 0 0
 * 0 0 0 1
 * 0 0 0 0
 * 1 0 1 0
 *
 * Output:
 * NO
 **/

#include <iostream>

using namespace std;

int left(int x)
{
    int ret = (x - 1) % 4;
    if (ret < 0)
    {
        return 3;
    }
    return ret;
}

int main()
{
    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool crash = false;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i][3] == 1)
        {
            int sum = 0;
            for (int j = 0; j < 4; j++)
            {
                sum += arr[i][j];
            }

            if (arr[(i + 1) % 4][0] || arr[(i + 2) % 4][1] || arr[left(i)][2] || sum > 1)
            {
                crash = true;
                break;
            }
        }
    }

    if (crash)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}