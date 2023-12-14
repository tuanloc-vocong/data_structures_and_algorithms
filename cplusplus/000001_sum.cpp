// Title: Sum
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình cho phép người dùng nhập vào 2 số nguyên lần lượt là số kẹo của Upan và Ipan. Bạn hãy tính tổng số
 * kẹo của 2 bạn ấy và in kết quả ra màn hình.
 * 
 * Input: 
 * Gồm một dòng duy nhất chứa hai số nguyên a và b cách nhau bởi một khoảng trắng (a, b thuộc kiểu số nguyên 32 bits),
 * với a, b lần lượt là số kẹo của Upan, Ipan. Dữ liệu đảm bảo kết quả tổng a và b cũng thuộc kiểu số nguyên 32 bits.
 * 
 * Output:
 * In kết quả theo định dạng “a + b = c” với c là tổng số kẹo của cả 2 bạn Upan và Ipan.
 *  
 * Example 1:
 * Input: 4 5
 * Output: 4 + 5 = 9
 **/

#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b;
    return 0;
}