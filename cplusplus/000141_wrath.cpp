// Title: Wrath
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Algorithmic Complexity

/**
 * Hỡi những bàn tay nhuốm máu của người vô tội!
 *
 * Có n người có tội trong một hàng, người thứ i giữ một cái móng vuốt có chiều dài Li​. Khi chuông reo mỗi người giết một số người
 * trước mặt mình. Tất cả mọi người giết những người khác cùng một lúc. Cụ thể, người thứ i giết người thứ j khi và chỉ khi j<i và j≥i−Li​​.
 *
 * Bạn được cung cấp độ dài của các móng vuốt. Bạn cần tìm số người còn sống sau khi chuông reo.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên n (1≤n≤10^6) - số người có tội.
 * Dòng thứ hai chứa n số nguyên được phân tách bởi dấu cách: L1,L2,...,Ln​​ (0≤Li≤10^9), trong đó Li​​ là độ dài móng vuốt của người thứ i.
 *
 * Output:
 * In ra một số nguyên - số người còn sống sau khi chuông reo.
 *
 * Example 1:
 * Input:
 * 4
 * 0 1 0 10
 *
 * Output:
 * 1
 *
 * Example 2:
 * Input:
 * 2
 * 0 0
 *
 * Output:
 * 2
 *
 * Example 3:
 * Input:
 * 10
 * 1 1 3 0 0 0 2 1 0 3
 *
 * Output:
 * 3
 **/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0, j = n - 1, lastKillPos = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        j = min(j, i);
        lastKillPos = max(0, i - a[i]);

        if (j > lastKillPos)
        {
            count += (j - lastKillPos);
            j = lastKillPos;
        }
    }

    cout << n - count;
    return 0;
}