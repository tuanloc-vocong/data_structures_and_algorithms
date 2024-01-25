// Title: Triangle
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic: Introduction

/**
 * Viết chương trình nhập vào ba cạnh a, b, c của tam giác. Tính chu vi, diện tích tam giác.
 * 
 * Biết rằng:
 * Chu vi tam giác: P=a+b+c
 * Diện tích tam giác: S=√​p∗(p−a)∗(p−b)∗(p−c)
 * Với p là nửa chu vi tam giác.
 * 
 * Input:
 * Một dòng duy nhất gồm ba số thực a, b, c (cách nhau bởi khoảng trắng) là ba cạnh của tam giác. Các cạnh có giá trị
 * không quá 1200 và luôn đảm bảo tạo thành một tam giác.
 * 
 * Output:
 * Một dòng duy nhất gồm hai số thực P và S cách nhau bởi khoảng trắng. Trong đó P là chu vi của tam giác, S là diện tích
 * của tam giác.
 * Lưu ý: Kết quả phải được in ra 2 chữ số sau phần thập phân
 *  
 * Example 1:
 * Input:
 * 4 5 3
 * 
 * Output:
 * 12.00 6.00
 **/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double P = a + b + c;
    double p = P / 2;
    double S = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(2) << P << ' ' << S;
    return 0;
}