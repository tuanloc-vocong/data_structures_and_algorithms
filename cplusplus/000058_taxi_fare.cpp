// Title: Taxi fare
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Viết chương trình tính tiền đi taxi dựa vào số km nhập vào (số nguyên) theo công thức sau:
 *
 * Giá tiền đi taxi theo km 	Giá (vnd/km)
 * 1km đầu tiên 	            15,000
 * Từ km thứ 2 đến thứ 5 	    13,500
 * Từ km thứ 6 trở lên 	        11,000
 *
 * Lưu ý: Nếu đi từ km thứ 12 trở lên được giảm 10% tổng tiền.
 *
 * Input:
 * Một dòng duy nhất, chứa một số nguyên n là số km mà bạn đã đi được (0<n≤100).
 *
 * Output:
 * In ra một số nguyên duy nhất là số tiền taxi bạn phải trả.
 *
 * Example 1:
 * Input:
 * 4
 *
 * Output:
 * 55500
 *
 * Example 2:
 * Input:
 * 15
 *
 * Output:
 * 161100
 *
 * Explanation:
 * Ví dụ 1:
 * 1km đầu được tính với giá 15.000.
 * Từ km thứ 2 đến thứ 4 được tính với giá 13.500.
 * Vậy tổng cộng là 15.000 + 13.5000 * 3 = 55.500.
 *
 * Ví dụ 2:
 * 1km đầu được tính với giá 15.000.
 * Từ km thứ 2 đến thứ 5 được tính với giá 13.500.
 * Từ km thứ 6 đến 15 được tính với giá 11.000.
 * Vậy tổng cộng là 15.000 + 13.500 * 4 + 11.000 * 10 = 179.000. Nhưng theo chính sách của hãng taxi thì họ được giảm 10%,
 * vậy số tiền thực tế họ phải trả là 161.100.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}