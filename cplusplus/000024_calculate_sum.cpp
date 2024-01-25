// Title: Calculate Sum
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: User Defined Function

/**
 * Viết chương trình tính tổng S theo công thức.
 * S=1^2 + 2^​2 + 3^​2 +...+ n^2 với 1≤n
 * 
 * Input:
 * Gồm một dòng duy nhất chứa số nguyên dương n (n≤1000).
 * 
 * Output:
 * Gồm một dòng duy nhất in ra kết quả bài toán.
 *  
 * Example 1:
 * Input:
 * 5
 * 
 * Output:
 * 55
 **/

#include <iostream>

using namespace std;

int sum(int n){
    int s = 0;
    for(int i = 0; i <= n; i++){
        s += i * i;
    }
    return s;
}

int main(){
    int n;
    cin >> n;

    cout << sum(n);
    return 0;
}