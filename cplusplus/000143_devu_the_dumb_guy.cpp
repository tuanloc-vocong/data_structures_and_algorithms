// Title: Devu, The Dumb Guy
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Devu là một chàng ngốc, anh ấy học rất chậm. Bạn phải dạy anh ta n môn học, môn học thứ i có ci​ chương. Khi dạy anh ấy,
 * bạn phải dạy liên tục tất cả các chương của môn học.
 *
 * Giả sử rằng sức học ban đầu cho mỗi chương của môn học là x giờ. Nói cách khác, anh ta có thể học một chương của một môn
 * học cụ thể trong x giờ.
 *
 * Tuy nhiên Devu không hoàn toàn ngốc, cũng có một điều tốt về anh ta. Nếu bạn dạy anh ta một môn học, thì thời gian cần
 * thiết để dạy bất kỳ chương nào của môn học tiếp theo sẽ cần ít hơn chính xác 1 giờ so với chương trước đó (xem ví dụ để
 * hiểu rõ hơn). Lưu ý rằng sức học mỗi chương của anh ta không thể dưới 1 giờ.
 *
 * Bạn có thể dạy anh ta n môn học theo bất kỳ thứ tự nào có thể. Tìm ra khoảng thời gian tối thiểu (tính bằng giờ) Devu sẽ
 * dành để hiểu tất cả các môn học và bạn sẽ tự do làm một số công việc thích thú hơn là dạy một anh chàng ngốc.
 *
 * Hãy cẩn thận rằng câu trả lời có thể không phù hợp với kiểu dữ liệu 32 bit.
 *
 * Input:
 * Dòng đầu tiên sẽ chứa hai số nguyên cách nhau bằng dấu cách n,x (1≤n,x≤10^5).
 * Dòng tiếp theo sẽ chứa n số nguyên c1,c2,...,cn​​ (1≤ci≤10^5) cách nhau bởi một khoảng trắng.
 *
 * Output:
 * Đưa ra một số nguyên duy nhất là câu trả lời cho vấn đề.
 *
 * Example 1:
 * Input:
 * 2 3
 * 4 1
 *
 * Output:
 * 11
 *
 * Example 2:
 * Input:
 * 4 2
 * 5 1 2 1
 *
 * Output:
 * 10
 *
 * Example 3:
 * Input:
 * 3 3
 * 1 1 1
 *
 * Output:
 * 6
 **/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long selfLearning(vector<int> &subjects, int x)
{
    sort(subjects.begin(), subjects.end());
    long long minTime = 0;

    for (int subject : subjects)
    {
        minTime += 1LL * subject * x;
        if (x > 1)
        {
            x--;
        }
    }

    return minTime;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> subjects(n);

    for (int i = 0; i < n; i++)
    {
        cin >> subjects[i];
    }

    long long result = selfLearning(subjects, x);
    cout << result;
    return 0;
}