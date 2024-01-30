// Title: The Sum Of The Smallest Edge Weights
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Graphs

/**
 * Cho đồ thị có hướng được biểu diễn bằng danh sách cạnh (edge list). Giữa 2 đỉnh có thể có nhiều hơn 1 cạnh với
 * các trọng số khác nhau. Hãy tính tổng trọng số các cạnh có trọng số nhỏ nhất.
 *
 * Input:
 * Dòng đầu tiên là số lượng cạnh M (1≤M≤10^6).
 * M dòng tiếp theo, mỗi dòng gôm ba số u, v và w mô tả cạnh (u, v) có trọng số là w (0≤u,v<10^3,0≤w≤10^3).
 *
 * Output:
 * In ra tổng trọng số của các cạnh có trọng số nhỏ nhất.
 *
 * Example 1:
 * Input:
 * 5
 * 1 2 1
 * 3 1 2
 * 1 4 6
 * 3 1 1
 * 2 4 5
 *
 * Output:
 * 2
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

    int minw = 1001;
    for (int i = 0; i < m; i++)
    {
        if (edgeList[i].w < minw)
        {
            minw = edgeList[i].w;
        }
    }

    int sum_minw = 0;
    for (int i = 0; i < m; i++)
    {
        if (edgeList[i].w == minw)
        {
            sum_minw += minw;
        }
    }

    cout << sum_minw;
    return 0;
}