// Title: Binary Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(log2(n))
// Space Complexity:
// Topic:

/**
 * Cho số n ở hệ thập phân, hãy viết n dưới dạng số nhị phân.
 * 
 * Input:
 * Một dòng duy nhất là số nguyên không âm n (n \leq 10^_{9}).
 * 
 * Output:
 * Một dòng duy nhất là biểu diễn số n ở hệ nhị phân.
 * 
 * Example 1:
 * Input:
 * 10
 * 
 * Output:
 * 1010
 **/

#include <iostream>
using namespace std;

void f(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }
    if (n / 2 > 0) f(n / 2);
    cout << n % 2;
}
int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}