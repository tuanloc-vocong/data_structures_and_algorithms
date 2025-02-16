// Title: Create edge list
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho đồ thị vô hướng được biểu diễn bằng ma trận kề (adjacent matrix). Đọc đồ thị trên và biểu thị bằng danh sách
 * cạnh (edge list).
 *
 * Input:
 * Dòng đầu tiên là số lượng đỉnh N (1≤N≤10^3).
 *
 * N dòng tiếp theo, mỗi dòng gồm N số của ma trận C biểu diễn thành ma trận kề của đồ thị.
 * Nếu Ci,j=0: không có cạnh giữa hai đỉnh i, j.
 * Nếu Ci,j=1: có cạnh giữa hai đỉnh i, j.
 *
 * Các đỉnh được đánh số từ 0 đến N – 1. Đảm bảo Ci,i=0 với mọi đỉnh i.
 *
 * Output:
 * Dòng đầu in ra M số lượng cạnh của đồ thị.
 *
 * M dòng tiếp theo, mỗi dòng gồm hai số u, v (u<v) tương ứng với cạnh (u,v) và cạnh (v,u) trong đồ thị.
 *
 * Lưu ý: In các cạnh ra theo thứ tự từ điển tăng dần.
 *
 * Thứ tự từ điển của cạnh (a,b) nhỏ hơn cạnh (c,d) khi a<c hoặc (a = c và b < d).
 *
 * Example 1:
 * Input:
 * 2
 * 0 1
 * 1 0
 *
 * Output:
 * 1
 * 0 1
 *
 * Example 2:
 * Input:
 * 4
 * 0 1 1 0
 * 1 0 1 1
 * 1 1 0 1
 * 0 1 1 0
 *
 * Output:
 * 5
 * 0 1
 * 0 2
 * 1 2
 * 1 3
 * 2 3
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}