// Title: Product Of The Self Loop Edges
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Graphs

/**
 * Cho đồ thị có hướng được biểu diễn bằng danh sách cạnh (edge list). Trong đồ thị có các cạnh khuyên.
 * Hãy đếm số lượng khuyên và tính tích trọng số các cạnh khuyên đó.
 *
 * Input:
 * Dòng đầu tiên là số lượng cạnh M (1≤M≤10^6).
 * M dòng tiếp theo, mỗi dòng gôm ba số u, v và w mô tả cạnh (u, v) có trọng số là w (0≤u,v<10^3,0≤w≤10^3).
 *
 * Output:
 * In ra số lượng cạnh khuyên và tích trọng số của các cạnh khuyên. Hai số cách nhau bởi khoảng trắng.
 * Trường hợp không có cạnh khuyên nào thì chỉ cần in ra -1.
 * Do tích các cạnh khuyên có thể rất lớn, ta chỉ cần in số dư của kết quả khi chia cho 10^{6} + 7.
 *
 * Example 1:
 * Input:
 * 5
 * 1 1 3
 * 3 4 6
 * 2 2 1
 * 2 1 3
 * 5 4 1
 *
 * Output:
 * 2 3
 **/

#include <iostream>

using namespace std;

struct Edge
{
    int u, v, w;
};

int main()
{
    Edge edgeList[1000006];
    int m, u, v, w;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        edgeList[i].u = u;
        edgeList[i].v = v;
        edgeList[i].w = w;
    }

    int count = 0, ans = 1;
    for (int i = 0; i < m; i++)
    {
        if (edgeList[i].u == edgeList[i].v)
        {
            count++;
            ans = (ans * edgeList[i].w) % 1000007;
        }
    }

    if (count > 0)
    {
        cout << count << " " << ans;
    }
    else
    {
        cout << -1;
    }
    return 0;
}