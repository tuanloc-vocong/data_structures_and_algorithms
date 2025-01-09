// Title: Create an adjacency list
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho đồ thị có hướng không trọng số được biểu diễn bằng ma trận kề (adjacent matrix). Bạn hãy tạo danh sách kề
 * (adjacent list) từ ma trận đã cho rồi sử dụng danh sách kề đó để in ra danh sách cạnh (edge list) của đồ thị.
 *
 * Input:
 * Dòng đầu tiên là số lượng đỉnh N (1≤N≤10^3).
 *
 * N dòng tiếp theo, mỗi dòng gồm N số của ma trận C biểu diễn thành ma trận kề của đồ thị.
 * Nếu Ci,j=0: không có cạnh nối từ đỉnh i đến đỉnh j.
 * Nếu Ci,j=1: có cạnh nối từ đỉnh i đến đỉnh j.
 *
 * Các đỉnh được đánh dấu từ 0 đến N−1. Đảm bảo Ci,i=0 với mọi đỉnh i.
 *
 * Output:
 * Dòng đầu tiên là số M số lượng cạnh.
 * M dòng tiếp theo, mỗi dòng là hai số u, v biểu diễn cho cạnh (u,v).
 * Lưu ý: In các cạnh ra theo thứ tự từ điển. Một cạnh (a,b) có thứ tự từ điển nhỏ hơn cạnh (c,d) khi a<c hay
 * (a=c và b<d).
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

int main()
{
    cout << "Hello, World!!!";
    return 0;
}