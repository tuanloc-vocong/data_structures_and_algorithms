// Title: GukiZ And Contest
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Giáo sư GukiZ thích các cuộc thi lập trình. Ông đặc biệt thích đánh giá học sinh của mình trong các cuộc thi mà ông chuẩn bị.
 * Bây giờ, ông ấy quyết định chuẩn bị một cuộc thi mới.
 *
 * Tổng cộng, n học sinh sẽ tham dự, và trước khi bắt đầu, mỗi học sinh trong số họ đều có một số điểm nguyên dương. Học sinh được
 * đánh số từ 1 đến n. Hãy biểu thị điểm số của học sinh thứ i là ai​​. Sau khi cuộc thi kết thúc, mỗi học sinh sẽ có một thứ hạng
 * nguyên dương. GukiZ kỳ vọng rằng các học sinh của mình sẽ có thứ hạng phù hợp với số điểm của họ.
 *
 * Ông cho rằng mỗi học sinh sẽ diễn ra bình đẳng. Cụ thể, nếu học sinh A có số điểm thấp hơn học sinh B, thì A sẽ đạt vị trí lớn
 * hơn B, và nếu hai học sinh có số điểm bằng nhau thì họ sẽ có cùng một thứ hạng.
 *
 * GukiZ muốn bạn xây dựng lại kết quả theo mong đợi của anh ấy. Giúp đỡ ông ấy và xác định thứ hạng sau khi kết thúc cuộc thi cho
 * từng học sinh của mình nếu mọi thứ diễn ra như mong đợi.
 *
 * Input:
 * Dòng đầu tiên chứa số nguyên n (1≤n≤2000), số học sinh của GukiZ.
 * Dòng thứ hai chứa n số a1,a2,...an​​ (1≤ai≤2000) trong đó ai​ là số điểm của học sinh thứ i (1≤i≤n).
 *
 * Output:
 * In một dòng duy nhất, thứ hạng sau khi kết thúc cuộc thi của từng học sinh trong số n học sinh theo thứ tự ban đầu.
 *
 * Example 1:
 * Input:
 * 3
 * 1 3 3
 *
 * Output:
 * 3 1 1
 *
 * Example 2:
 * Input:
 * 1
 * 1
 *
 * Output:
 * 1
 *
 * Example 3:
 * Input:
 * 5
 * 3 5 3 4 5
 *
 * Output:
 * 4 1 4 3 1
 **/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 2005;
int ranked[MAX];

int main()
{
    int n, rating;
    cin >> n;
    vector<int> ratings(n), sorted_ratings(n);

    for (int i = 0; i < n; i++)
    {
        cin >> rating;
        ratings[i] = sorted_ratings[i] = rating;
    }

    sort(sorted_ratings.begin(), sorted_ratings.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        rating = sorted_ratings[i];
        if (!ranked[rating])
        {
            ranked[rating] = i + 1;
        }
    }

    for (int &rating : ratings)
    {
        cout << ranked[rating] << " ";
    }

    return 0;
}