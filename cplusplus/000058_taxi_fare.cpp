// Title: Taxi Fare
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic: Conditional Statements

/**
 * Viết chương trình tính tiền đi taxi dựa vào số km nhập vào (số nguyên) theo công thức sau:
 * 
 * Giá tiền đi taxi theo km	Giá (vnd/km)
 * 1km đầu tiên	15,000
 * Từ km thứ 2 đến thứ 5	13,500
 * Từ km thứ 6 trở lên	11,000
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
 **/

#include <iostream>

using namespace std;

int main(){
    int n;
    float vnd = 0;
    cin >> n;

    if(n <= 1){
        vnd = 15000;
    }else if(n <= 5){
        vnd = 15000 + (n - 1) * 13500;
    }else{
        vnd = 15000 + 4 * 13500 + (n - 5) * 11000;
    }

    if(n >= 12){
        vnd = vnd * 0.9;
    }

    cout << (int)vnd;
    return 0;
}