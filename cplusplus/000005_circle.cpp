// Title: Circle
// Source: Big-O Coding
// Difficulty: Easy
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic: Introduction

/**
 * Nhập vào bán kính của một hình tròn. Tính chu vi và diện tích hình tròn.
 *
 * Biết rằng:
 * Chu vi hình tròn = 2 * bán kính * PI
 * Diện tích hình tròn = bán kính * bán kính * PI
 * Quy ước: PI = 3.14
 *
 * Input:
 * Một dòng duy nhất gồm một số thực dương không quá 2000 - là bán kính của hình tròn.
 *
 * Output:
 * Gồm hai dòng.
 * Dòng đầu tiên là chu vi của hình tròn.
 * Dòng thứ hai là diện tích của hình tròn.
 *
 * Lưu ý: Kết quả phải được in ra 2 chữ số sau phần thập phân.
 *
 * Example 1:
 * Input:
 * 5.00
 *
 * Output:
 * 31.40
 * 78.50
 **/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double r;
    cin >> r;
    const double PI = 3.14;
    double perimeter = 2 * r * PI;
    double area = r * r * PI;
    cout << fixed << setprecision(2) << perimeter << endl;
    cout << fixed << setprecision(2) << area << endl;
    return 0;
}