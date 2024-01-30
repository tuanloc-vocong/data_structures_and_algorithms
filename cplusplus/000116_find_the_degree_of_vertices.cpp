// Title: Find The Degree Of Vertices
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic: Graphs

/**
 * Cho đồ thị vô hướng được biểu diễn bằng ma trận kề (adjacent matrix), và số nguyên X đại diện cho 1 đỉnh trong đồ thị.
 * Tìm bậc của đỉnh X.
 *
 * Input:
 * Dòng đầu tiên là số lượng đỉnh N và đỉnh cần tính bậc X (1≤N≤10^3,0≤X<N).
 * N dòng tiếp theo, mỗi dòng gồm N số của ma trận C biểu diễn thành ma trận kề của đồ thị.
 *
 * Nếu Cij=0: không có cạnh giữa hai đỉnh i, j.
 * Nếu Cij=1: có cạnh giữa hai đỉnh i, j.
 *
 * Các đỉnh được đánh số từ 0 đến N – 1. Đảm bảo Cii=0 với mọi đỉnh i.
 *
 * Output:
 * In ra bậc của đỉnh X.
 *
 * Example 1:
 * Input:
 * 3 2
 * 0 1 1
 * 1 0 1
 * 1 1 0
 *
 * Output:
 * 2
 **/

#include <iostream>

using namespace std;

int adj_matrix[1000][1000];

int main()
{
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj_matrix[i][j];
        }
    }

    int degree = 0;
    for (int i = 0; i < n; i++)
    {
        if (adj_matrix[x][i] == 1)
        {
            degree++;
        }
    }

    cout << degree;
    return 0;
}