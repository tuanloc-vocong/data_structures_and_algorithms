// Title: Calculate Sum
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Loop Statements

/**
 * Viết chương trình đọc vào số nguyên dương n và tính tổng các số nguyên từ 1 đến n, tức là (1+2+...+n).
 * 
 * Input:
 * Dòng đầu tiên chứa số nguyên dương n (n≤100).
 * 
 * Output:
 * In tổng S.
 *  
 * Example 1:
 * Input:
 * 5
 * 
 * Output:
 * 15
 **/

#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout << sum;
    return 0;
}