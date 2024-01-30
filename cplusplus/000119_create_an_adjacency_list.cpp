// Title: Create An Adjacency List
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic: Graphs

/**
 * Cho đồ thị có hướng không trọng số được biểu diễn bằng ma trận kề (adjacent matrix). Bạn hãy tạo danh sách kề (adjacent list)
 * từ ma trận đã cho rồi sử dụng danh sách kề đó để in ra danh sách cạnh (edge list) của đồ thị.
 *
 * Input:
 * Dòng đầu tiên là số lượng đỉnh N (1≤N≤10^3​​).
 * N dòng tiếp theo, mỗi dòng gồm N số của ma trận C biểu diễn thành ma trận kề của đồ thị.
 *
 * Nếu Cij=0: không có cạnh nối từ đỉnh i đến đỉnh j.
 * Nếu Cij=1: có cạnh nối từ đỉnh i đến đỉnh j.
 *
 * Các đỉnh được đánh dấu từ 0 đến N−1. Đảm bảo Cii=0 với mọi đỉnh i.
 *
 * Output:
 * Dòng đầu tiên là số M số lượng cạnh.
 * M dòng tiếp theo, mỗi dòng là hai số u, v biểu diễn cho cạnh (u,v).
 * Lưu ý: In các cạnh ra theo thứ tự từ điển. Một cạnh (a,b) có thứ tự từ điển nhỏ hơn cạnh (c,d) khi a<c hay (a=c và b<d).
 *
 * Example 1:
 * Input:
 * 2
 * 0 1
 * 1 0
 *
 * Output:
 * 2
 * 0 1
 * 1 0
 *
 * Example 2:
 * Input:
 * 4
 * 0 1 1 1
 * 1 0 0 1
 * 0 1 0 1
 * 0 0 1 0
 *
 * Output:
 * 8
 * 0 1
 * 0 2
 * 0 3
 * 1 0
 * 1 3
 * 2 1
 * 2 3
 * 3 2
 **/

#include <iostream>

using namespace std;

int adj_matrix[1003][1003];
int adj_list[1003][1003];
int len_list[1003];
int edge_count = 0;

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
        len_list[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj_matrix[i][j] == 1)
            {
                edge_count++;
                adj_list[i][len_list[i]++] = j;
            }
        }
    }

    cout << edge_count << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < len_list[i]; j++)
        {
            cout << i << " " << adj_list[i][j] << endl;
        }
    }
    return 0;
}