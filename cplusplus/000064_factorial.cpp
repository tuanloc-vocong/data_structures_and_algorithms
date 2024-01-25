// Title: Factorial
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Viết chương trình tính giai thừa của một số n (kí hiệu là n!) bằng phương pháp đệ quy, biết:
 * T(n) = n! = 1 x 2 x 3 x … x n
 * Biết rằng: T(0)=1.
 * Trong đó T(0)=1.
 * 
 * Input:
 * Một dòng duy nhất gồm một số nguyên không âm n (n≤10).
 * 
 * Output:
 * Một dòng duy nhất là giá trị của T(n).
 * 
 * Example 1:
 * Input:
 * 3
 * 
 * Output:
 * 6
 **/

#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}