// Title: Salary
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic:

/**
 * Bạn là một kế toán của một công ty, trách nhiệm của bạn là tính lương cho các nhân viên trong công ty. Lương của
 * một nhân viên được tính theo công thức: Lương = Lương cơ bản * Hệ số lương + Phụ cấp. Hãy viết chương trình để có
 * thể tính lương của một nhân viên nhanh chóng.
 * 
 * Input:
 * Gồm có 3 dòng:
 * Dòng thứ nhất gồm một số nguyên dương x (0<x<10^8) là lương cơ bản.
 * Dòng thứ hai gồm một số thực a (0.0<a<10.0) là hệ số lương.
 * Dòng thứ ba gồm một số nguyên dương t (0≤t<10^7) là phụ cấp.
 * 
 * Output:
 * Gồm một số, cho biết tổng lương của nhân viên trên.
 * Lưu ý: Kết quả phải được in ra 2 chữ số sau phần thập phân.
 *  
 * Example 1:
 * Input:
 * 1390000
 * 2.34
 * 600000
 * 
 * Output:
 * 3852600.00
 **/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x, t;
    double a;
    cin >> x >> a >> t;
    double salary = x * a + t;
    cout << fixed << setprecision(2) << salary;
    return 0;
}