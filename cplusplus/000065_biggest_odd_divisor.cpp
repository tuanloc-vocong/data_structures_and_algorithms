// Title: Biggest Odd Divisor
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(log(n))
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Viết chương trình tìm ước số lẻ lớn nhất của của một số nguyên dương n bằng phương pháp đệ quy.
 * 
 * Input:
 * Một dòng duy nhất là số nguyên dương n (n≤10^​6).
 * 
 * Output:
 * Một dòng duy nhất là ước số lẻ lớn nhất của n.
 * 
 * Example 1:
 * Input:
 * 100
 * 
 * Output:
 * 25
 **/

#include <iostream>

using namespace std;

int maxOddDivisor(int n, int x){
    if(x % 2 == 1 && n % x == 0){
        return int(x);
    }
    return maxOddDivisor(n, x / 2);
}

int main(){
    int n;
    cin >> n;
    cout << maxOddDivisor(n, n);
    return 0;
}