// Title: The Furthest Points
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho bạn một điểm M(x,y) và N điểm khác trong mặt phảng Oxy, hãy tìm những điểm xa nhất so với điểm M. Biết
 * công thức tính khoảng cách giữa hai điểm A(x,y) và B(z,t) là:
 *
 * distance(A,B) = sqrt((x−z)^2+(y−t)^2)
 *
 * Input:
 * Dòng thứ nhất gồm 2 số nguyên Mx và My là tọa độ điểm M.
 *
 * Dòng thứ hai là số nguyên dương N, số lượng điểm trong Oxy(N≤1.000).
 *
 * N dòng tiếp theo, mỗi dòng là hai số nguyên xi và yi, là tung độ và hoành độ của điểm thứ i(0≤i<N).
 *
 * Các số tọa độ điểm đều là số nguyên nằm trong đoạn [-1000, 1000].
 *
 * Nếu có nhiều điểm cùng đều cách xa nhất so với M, chỉ cần lấy điểm đầu tiên theo thứ tự trong dữ liệu vào.
 *
 * Output:
 * Một dòng là tọa độ của điểm cần tìm.
 *
 * Example 1:
 * Input:
 * 0 0
 * 3
 * 1 2
 * 1 1
 * 1 0
 *
 * Output:
 * 1 2
 *
 * Explanation:
 * Ví dụ 1:
 * Khoảng cách xa nhất tới điểm (0,0) trong 3 điểm được cho là (1,2)
 *
 * Ví dụ 2:
 * Trong 3 điểm đã cho ta có điểm (1, 2) và (-1,-2) đều xa nhất và có cùng khoảng cách với điểm (0,0). Nhưng điểm
 * (-1,-2) xuất hiện đầu tiên trong danh sách được cho.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}