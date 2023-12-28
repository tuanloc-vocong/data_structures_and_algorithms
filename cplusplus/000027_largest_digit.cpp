// Title: Largest Digit
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic:

/**
 * Cho một số nguyên dương N, hãy cho biết chữ số lớn nhất của số N.
 * 
 * Input:
 * Một số nguyên dương N (N≤10^9).
 * 
 * Output:
 * In ra chữ số lớn nhất của số N.
 *  
 * Example 1:
 * Input:
 * 10
 * 
 * Output:
 * 1
 **/

#include <iostream>

using namespace std;

int largest(int n){
    int max = 0;
    while(n > 0){
        int digit = n % 10;
        if(max < digit){
            max = digit;
        }
        n /= 10;
    }
    return max;
}

int main(){
    int N;
    cin >> N;
    cout << largest(N);
    return 0;
}