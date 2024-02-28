// Title: Towers
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Cô bé Vasya đã nhận được một bộ đồ chơi lắp ráp. Bộ đồ chơi bao gồm một số thanh gỗ, chiều dài của chúng đã biết.
 * Các thanh có thể được đặt chồng lên thành một tháp nếu độ dài của chúng bằng nhau.
 *
 * Vasya muốn xây dựng số lượng tháp tối thiểu từ các thanh. Giúp Vasya sử dụng các thanh theo cách tốt nhất có thể.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên N (1≤N≤1000) - số thanh mà Vasya cần xử lý. Dòng thứ hai chứa N số nguyên được phân
 * tách bằng dấu cách li​​ - độ dài của các thanh. Tất cả các độ dài là số tự nhiên không quá 1000.
 *
 * Output:
 * Trong một dòng xuất ra hai số - chiều cao của tháp lớn nhất và tổng số tháp tối thiểu. Hãy nhớ rằng Vasya cần sử dụng
 * tất cả các thanh.
 *
 * Example 1:
 * Input:
 * 3
 * 1 2 3
 *
 * Output:
 * 1 3
 *
 * Example 2:
 * Input:
 * 4
 * 6 5 6 7
 *
 * Output:
 * 2 3
 **/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> bars(n);

    for (int i = 0; i < n; i++)
    {
        cin >> bars[i];
    }

    sort(bars.begin(), bars.end());
    int n_towers = 1, max_height = 1, cur_height = 1;

    for (int i = 1; i < n; i++)
    {
        if (bars[i] == bars[i - 1])
        {
            cur_height++;
            max_height = max(max_height, cur_height);
        }
        else
        {
            n_towers++;
            cur_height = 1;
        }
    }

    cout << max_height << " " << n_towers;
    return 0;
}