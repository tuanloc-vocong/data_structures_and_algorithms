// Title: The Largest Digit
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Viết chương trình tìm chữ số lớn nhất của số nguyên N bằng phương pháp đệ quy.
 * 
 * Input:
 * Một dòng duy nhất là số nguyên N (∣N∣≤10^​6).
 * 
 * Output:
 * Một dòng duy nhất là chữ số lớn nhất của số nguyên N.
 * 
 * Example 1:
 * Input:
 * 4252
 * 
 * Output:
 * 5
 **/

#include <iostream>
#include <cmath>

using namespace std;

int maxDigit(int n){
    if(n < 10)
        return n;
    else
        return max(n % 10, maxDigit(n / 10));
}

int main(){
    int n;
    cin >> n;
    if(n < 0)
        n *= -1;
    cout << maxDigit(n);
    return 0;
}