// Title: Bear And Game
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Dynamic Array & String

/**
 * Bear Limak thích xem thể thao trên TV. Anh ta dự định sẽ xem một trận đấu hôm nay. Trận đấu dài 90 phút không có giải lao.
 *
 * Mỗi phút trận đấu có thể là gay cấn hoặc nhàm chán. Nếu 15 phút liên tục nhàm chán thì Limak sẽ tắt TV ngay lập tức.
 *
 * Bạn biết rằng có n phút gay cấn tại thời điểm t1,t2,t3,...,tn​​. Nhiệm vụ của bạn là tính xem Limak sẽ xem bao nhiêu phút của trận đấu.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên n (1≤n≤90) – số lượng đoạn gây cấn.
 * Dòng tiếp theo gồm n số nguyên t1,t2,t3,...,tn​ (1≤t1<t2<t3<...<tn≤90) được cho theo thứ tự tăng dần.
 *
 * Output:
 * In số phút Limak xem trận đấu.
 *
 * Example 1:
 * Input:
 * 3
 * 7 20 88
 *
 * Output:
 * 35
 *
 * Example 2:
 * Input:
 * 9
 * 16 20 30 40 50 60 70 80 90
 *
 * Output:
 * 15
 *
 * Example 3:
 * Input:
 * 9
 * 15 20 30 40 50 60 70 80 90
 *
 * Output:
 * 90
 **/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (t + 15 < v[i])
        {
            cout << t + 15;
            return 0;
        }
        else
        {
            t = v[i];
        }
    }

    cout << min(t + 15, 90);
    return 0;
}