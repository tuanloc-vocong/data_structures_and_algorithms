// Title: Check Undirected Graph
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic: Graphs

/**
 * Cho đồ thị được biểu diễn bằng ma trận kề (adjacent matrix). Kiểm tra đồ thị đó có phải là đồ thị vô hướng hay không.
 *
 * Input:
 * Dòng đầu tiên là số lượng đỉnh N (1≤N≤10^3).
 * N dòng tiếp theo, mỗi dòng gồm N số của ma trận C biểu diễn thành ma trận kề của đồ thị.
 *
 * Nếu Cij=0: không có cạnh giữa hai đỉnh i, j.
 * Nếu Cij≠0: có cạnh giữa hai đỉnh i, j.
 *
 * Các đỉnh được đánh số từ 0 đến N – 1. Đảm bảo Cii=0 với mọi đỉnh i.
 *
 * Output:
 * In ra YES nếu đồ thị là đồ thị vô hướng. Ngược lại in ra NO.
 *
 * Example 1:
 * Input:
 * 3
 * 0 1 1
 * 1 0 1
 * 1 1 0
 *
 * Output:
 * YES
 **/

#include <iostream>

using namespace std;

int adj_matrix[1000][1000];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj_matrix[i][j];
        }
    }

    bool is_undirected = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (adj_matrix[i][j] != adj_matrix[j][i])
            {
                is_undirected = false;
                break;
            }
        }

        if (!is_undirected)
        {
            break;
        }
    }

    if (is_undirected)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}