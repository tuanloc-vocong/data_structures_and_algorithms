// Title: Sort The Array
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Là một lập trình viên, bạn rất thích mảng. Vào ngày sinh nhật của bạn, bạn bè của bạn đã tặng bạn một mảng a gồm n số
 * nguyên riêng biệt.
 *
 * Thật không may, kích thước của mảng a quá nhỏ. Bạn muốn một mảng lớn hơn! Bạn bè của bạn đồng ý cung cấp cho bạn một mảng
 * lớn hơn, nhưng chỉ khi bạn có thể trả lời đúng câu hỏi sau: có thể sắp xếp mảng a (theo thứ tự tăng dần) bằng cách chỉ
 * được đảo ngược một đoạn con của a không? Xem định nghĩa về đoạn con và đảo ngược trong ghi chú.
 *
 * Định nghĩa:
 * Một đoạn con [l,r] của mảng a là dãy a[l],a[l+1],...,a[r].
 * Nếu bạn có một mảng a có kích thước n và bạn đảo ngược đoạn con [l,r] của nó, mảng sẽ trở thành:
 * a[1],a[2],...,a[l−2],a[l−1],a[r],a[r−1],...,a[l+1],a[l],a[r+1],a[r+2],...,a[n−1],a[n]
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa số nguyên n (1≤n≤10^5) - kích thước của mảng a.
 * Dòng thứ hai chứa n số nguyên phân biệt bằng dấu cách: a[1],a[2],...,a[n] (1≤a[i]≤10^9).
 *
 * Output:
 * Xuất "yes" hoặc "no" (không có dấu ngoặc kép), tùy thuộc vào câu trả lời.
 * Nếu câu trả lời của bạn là "yes", thì hãy in hai số nguyên được phân tách bằng dấu cách biểu thị chỉ số bắt đầu và kết thúc
 * (bắt đầu không được lớn hơn kết thúc) của đoạn con được đảo ngược.
 * Nếu có nhiều cách chọn các chỉ số này, hãy in bất kỳ cách nào trong số chúng.
 *
 * Example 1:
 * Input:
 * 3
 * 3 2 1
 *
 * Output:
 * yes
 * 1 3
 *
 * Example 2:
 * Input:
 * 4
 * 2 1 3 4
 *
 * Output:
 * yes
 * 1 2
 *
 * Example 3:
 * Input:
 * 4
 * 3 1 2 4
 *
 * Output:
 * no
 *
 * Example 4:
 * Input:
 * 2
 * 1 2
 *
 * Output:
 * yes
 * 1 1
 **/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), sorted_a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sorted_a[i] = a[i];
    }

    sort(sorted_a.begin(), sorted_a.end());
    int l = 0, r = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != sorted_a[i])
        {
            l = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != sorted_a[i])
        {
            r = i;
            break;
        }
    }

    for (int i = l, j = r; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    }

    if (a != sorted_a)
    {
        cout << "no";
        return 0;
    }

    cout << "yes" << endl;
    cout << l + 1 << " " << r + 1;
    return 0;
}