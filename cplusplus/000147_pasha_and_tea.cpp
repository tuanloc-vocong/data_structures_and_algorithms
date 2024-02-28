// Title: Pasha And Tea
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Pasha quyết định mời bạn bè của mình đến một bữa tiệc trà. Nhân dịp đó, anh ấy có một ấm trà lớn với dung tích w ml và 2×n
 * cốc trà, mỗi cốc dành cho một người bạn của Pasha. Cốc thứ i có thể chứa nhiều nhất là ai​​ ml nước.
 *
 * Hóa ra trong số những người bạn của Pasha có đúng n chàng trai, chính xác n cô gái và tất cả họ sẽ đến dự tiệc trà. Để chiều
 * lòng mọi người, Pasha quyết định rót nước pha trà như sau:
 * Pasha có thể đun sôi ấm trà chính xác một lần và đổ vào đó nhiều nhất là w ml nước;
 * Pasha rót một lượng trà như nhau cho mỗi cô gái;
 * Pasha rót một lượng trà như nhau cho mỗi chàng trai;
 * Nếu mỗi cô gái được x ml nước, thì mỗi chàng trai được 2×x ml nước.
 *
 * Nói cách khác, mỗi chàng trai nên nhận được lượng nước nhiều hơn hai lần so với mỗi cô gái.
 *
 * Pasha rất tốt bụng và lịch sự, vì vậy anh ấy muốn lượng nước rót cho bạn bè của mình là nhiều nhất. Nhiệm vụ của bạn là giúp
 * anh ta và xác định cách phân chia cốc tối ưu cho những người bạn của Pasha.
 *
 * Input:
 * Dòng đầu tiên của dữ liệu đầu vào chứa hai số nguyên, n và w (1≤n≤10^5,1≤w≤10^9) - số bạn bè của Pasha là con trai (bằng số bạn
 * của Pasha là con gái) và dung tích ấm trà của Pasha tính bằng ml.
 * Dòng thứ hai của đầu vào chứa dãy số nguyên ai​​ (1≤ai≤10^9,1≤i≤2×n) - sức chứa của tách trà Pasha tính bằng ml.
 *
 * Output:
 * In ra một số thực - tổng lượng nước tối đa tính bằng ml mà Pasha có thể rót cho bạn bè của mình mà không vi phạm các điều kiện
 * đã cho. Câu trả lời của bạn sẽ được coi là đúng nếu sai số tuyệt đối hoặc tương đối của nó không vượt quá 10^−6​​.
 *
 * Example 1:
 * Input:
 * 2 4
 * 1 1 1 1
 *
 * Output:
 * 3
 *
 * Example 2:
 * Input:
 * 3 18
 * 4 4 4 2 2 2
 *
 * Output:
 * 18
 *
 * Example 3:
 * Input:
 * 1 5
 * 2 3
 *
 * Output:
 * 4.5
 **/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> cups(n * 2);

    for (int i = 0; i < n * 2; i++)
    {
        cin >> cups[i];
    }

    sort(cups.begin(), cups.end());
    double m = min(1.0 * cups[0], 1.0 * cups[n] / 2);
    double total = 3 * m * n;

    if (total > 1.0 * w)
        cout << w;
    else
        cout << setprecision(9) << min(total, 1.0 * w);

    return 0;
}