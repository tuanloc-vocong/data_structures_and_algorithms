// Title: George And Round
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(max(n,m))
// Space Complexity: O(1)
// Topic: Algorithmic Complexity

/**
 * George quyết định chuẩn bị một vòng thi Codesecrof, vì vậy anh ấy đã chuẩn bị m bài toán cho vòng này. Chúng ta hãy đánh số
 * các bài toán bằng các số nguyên 1 đến m. George ước tính độ phức tạp của vấn đề thứ ith​​ bằng số nguyên bi​​.
 *
 * Để làm cho vòng thi hay, anh ấy cần ra đề ít nhất n bài toán. Ngoài ra, anh ấy cần có ít nhất một bài toán có độ phức tạp chính
 * xác là a1​​, ít nhất một bài toán có độ phức tạp chính xác là a2, ... và ít nhất một bài toán có độ phức tạp chính xác là an. Tất
 * nhiên, vòng thi cũng có thể có các bài toán với độ phức tạp khác.
 *
 * George có trí tưởng tượng kém. Làm cho một số bài toán đã được chuẩn bị sẵn trở nên đơn giản hơn sẽ dễ hơn việc nghĩ ra một bài
 * toán mới. George rất giỏi trong việc đơn giản hóa các bài toán. Anh ấy có thể đơn giản hóa mọi bài đã được chuẩn bị sẵn với độ phức
 * tạp c thành bất kỳ độ phức tạp d nguyên dương nào (c≥d), bằng cách thay đổi giới hạn của dữ liệu đầu vào.
 *
 * Tuy nhiên, mọi việc không đơn giản như vậy. George hiểu rằng ngay cả khi anh ấy đơn giản hóa một số bài toán, anh ấy vẫn có thể hết
 * bài toán để làm vòng thi hay. Vì vậy anh ấy muốn tìm ra số lượng bài toán tối thiểu mà anh ấy cần ra đề ngoài m bài toán mà anh ấy
 * đã chuẩn bị để có thể có một vòng thi hay. Lưu ý rằng George có thể ra đề một bài toán mới với bất kỳ độ phức tạp nào.
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên n và m (1≤n,m≤3000) − số bài toán tối thiểu trong một vòng thi hay và số bài toán mà George đã
 * chuẩn bị. Dòng thứ hai chứa các số nguyên được phân tách bởi dấu cách a1,a2,...,an​​ (1≤a1<a2<...<an≤10^6) — yêu cầu về độ phức tạp của
 * các bài toán trong một vòng hay. Dòng thứ ba chứa các số nguyên được phân tách bởi dấu cách b1,b2,...,bm (1≤b1≤b2≤...≤bm≤10^6) — độ
 * phức tạp của các bài toán do George chuẩn bị .
 *
 * Output:
 * In ra một số nguyên duy nhất - câu trả lời cho bài toán.
 *
 * Example 1:
 * Input:
 * 3 5
 * 1 2 3
 * 1 2 2 3 3
 *
 * Output:
 * 0
 *
 * Example 2:
 * Input:
 * 3 5
 * 1 2 3
 * 1 1 1 1 1
 *
 * Output:
 * 2
 *
 * Example 3:
 * Input:
 * 3 1
 * 2 3 4
 * 1
 *
 * Output:
 * 3
 **/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int count = 0;
    for (int i = 0, j = 0; i < n && j < m; j++)
    {
        if (b[j] >= a[i])
        {
            count++;
            i++;
        }
    }

    cout << n - count;
    return 0;
}