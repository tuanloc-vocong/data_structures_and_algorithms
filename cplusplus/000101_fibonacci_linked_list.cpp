// Title: Fibonacci Linked List
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho bạn 3 số nguyên x, y và n. Bạn hãy tạo một danh sách liên kết các số nguyên theo luật Fibonacci như sau:
 * Node đầu tiên chứa x.
 * Node thứ 2 chứa y.
 * Các node sau, mỗi node chứa tổng của 2 node liền trước nó (lấy phần dư khi chia cho 1.000.007).
 *
 * Biết rằng danh sách này có n node.
 *
 * Input:
 * Dữ liệu đầu vào chứa một dòng duy nhất chứa 3 số nguyên x, y và n. (0≤x,y≤10^6,2≤n≤10^5).
 *
 * Output:
 * Một dòng duy nhất, in ra n số nguyên là các phần tử trong danh sách liên kết, các số ngăn cách nhau bởi một
 * khoảng trắng.
 *
 * Example 1:
 * Input:
 * 1 1 5
 *
 * Output:
 * 1 1 2 3 5
 *
 * Explanation:
 * Node thứ 1 chứa x nên bằng 1.
 * Node thứ 2 chứa y nên bằng 1.
 * Từ node thứ 3 trở đi, node sau bằng tổng của 2 node liền trước nó.
 * Nên node thứ 3 = node thứ 2 + node thứ 1 = 1 + 1 = 2.
 * Node thứ 4 = node thứ 3 + node thứ 2 = 2 + 1 = 3.
 * Node thứ 5 = node thứ 4 + node thứ 3 = 3 + 2 = 5.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}