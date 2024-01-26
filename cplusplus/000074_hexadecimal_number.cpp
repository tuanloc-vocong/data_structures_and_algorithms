// Title: Hexadecimal Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(log2(n))
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Cho số n ở hệ thập phân, hãy viết n dưới dạng số thập lục phân.
 * 
 * Input:
 * Một dòng duy nhất là số nguyên không âm n (n \leq 10^_{9}).
 * 
 * Output:
 * Một dòng duy nhất là biểu diễn số n ở hệ thập lục phân.
 * 
 * Example 1:
 * Input:
 * 10
 * 
 * Output:
 * A
 **/

#include <iostream>

using namespace std;

char convertToHex(int n) {
    if (n < 10) return '0' + n;
    return 'A' + n - 10;
}

void f(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }

    if (n / 16 > 0) f(n / 16);
    cout << convertToHex(n % 16);
}

int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}
