// Title: List Adjacency Edge
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Graphs

/**
 * Cho đồ thị có hướng có trọng số, được biểu diễn bằng danh sách cạnh (edge list). Hãy liệt kê
 * danh sách K cạnh có trọng số nhỏ nhất. Liệt kê theo thứ tự giảm dần của trọng số.
 *
 * Input:
 * Dòng đầu tiên là số cạnh M và số K (0<K≤M≤10^3).
 * M dòng tiếp theo, mỗi dòng là ba số u,v,w biểu diễn cho cạnh (u,v) có trong số là w.
 * Với 0≤u,v≤10^3,−10^3≤w≤10^3​​.
 * Đảm bảo trọng số của các cạnh là đôi một khác nhau.
 *
 * Output:
 * In ra K dòng, gồm K cạnh có trọng số nhỏ nhất. In theo thứ tự giảm dần của các trọng số của cạnh.
 *
 * Example 1:
 * Input:
 * 5 2
 * 1 2 10
 * 2 3 -8
 * 1 5 3
 * 2 4 0
 * 5 2 6
 *
 * Output:
 * 2 4
 * 2 3
 **/

#include <iostream>

using namespace std;

struct Edge
{
    int u, v, w;
};

void sort(Edge edgeList[], int len)
{
    for (int i = 1; i < len; i++)
    {
        Edge current = edgeList[i];
        int j = i;

        while (j > 0 && edgeList[j - 1].w > current.w)
        {
            edgeList[j] = edgeList[j - 1];
            j--;
        }
        edgeList[j] = current;
    }
}

int main()
{
    Edge edgeList[1003];
    int m, k, u, v, w;
    cin >> m >> k;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        edgeList[i].u = u;
        edgeList[i].v = v;
        edgeList[i].w = w;
    }

    sort(edgeList, m);
    for (int i = k - 1; i >= 0; i--)
    {
        cout << edgeList[i].u << " " << edgeList[i].v << endl;
    }
    return 0;
}