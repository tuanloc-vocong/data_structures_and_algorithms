// Title: Fibonacci Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(2^n)
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Tìm phần tử thứ n trong dãy Fibonacci bằng phương pháp đệ quy. Biết rằng dãy Fibonnacci được xây dựng theo công thức:
 * Các phần tử đầu tiên của dãy là: 1, 1, 2, 3, 5, ...
 * 
 * Input:
 * Một dòng duy nhất là số nguyên không âm n(n≤30).
 * 
 * Output:
 * Một dòng duy nhất là phần tử thứ n trong dãy Fibonacci.
 * 
 * Example 1:
 * Input:
 * 2
 * 
 * Output:
 * 2
 **/

#include <iostream>

using namespace std;

int fibonacci(int n){
   if(n == 0 || n == 1){
      return 1;
   }

   return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
   int n;
   cin >> n;
   cout << fibonacci(n);
   return 0;
}