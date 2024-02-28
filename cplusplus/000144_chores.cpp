// Title: Chores
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Petya và Vasya là hai anh em. Hôm nay là một ngày đặc biệt đối với họ khi cha mẹ để họ ở nhà một mình và giao cho họ n
 * việc nhà. Mỗi công việc được đặc trưng bởi một tham số duy nhất - độ phức tạp của nó. Độ phức tạp của công việc thứ i
 * tương đương với hi​​.
 *
 * Vì Petya lớn hơn, anh ta muốn nhận những công việc có độ phức tạp lớn hơn một số giá trị x(hi>x) và giao cho Vasya những
 * công việc có độ phức tạp nhỏ hơn hoặc bằng x(hi≤x). Hai anh em đã quyết định rằng Petya sẽ làm chính xác a công việc và
 * Vasya sẽ làm chính xác b công việc (a+b=n).
 *
 * Có bao nhiêu cách có thể chọn một số nguyên x để Petya nhận chính xác a việc nhà và Vasya nhận đúng b việc nhà?
 *
 * Input:
 * Dòng đầu tiên chứa ba số nguyên n,a và b(2≤n≤2000;a,b≥1;a+b=n) - tổng số công việc nhà, số công việc của Petya và số công
 * việc của Vasya.
 * Dòng tiếp theo chứa một dãy các số nguyên h1​​, h2​​, ..., hn​​ (1≤hi≤10^9), hi là độ phức tạp của công việc thứ i. Các số trong
 * dãy đã cho không nhất thiết phải khác nhau.
 * Tất cả các số trên các dòng được phân tách bằng dấu cách.
 *
 * Output:
 * Cần in ra số cách để chọn một giá trị nguyên của x. Nếu không có cách nào như vậy, hãy in 0.
 *
 * Example 1:
 * Input:
 * 5 2 3
 * 6 2 3 100 1
 *
 * Output:
 * 3
 *
 * Example 2:
 * Input:
 * 7 3 4
 * 1 1 9 1 1 1 1
 *
 * Output:
 * 0
 **/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> h(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    sort(h.begin(), h.end());
    cout << h[b] - h[b - 1];
    return 0;
}