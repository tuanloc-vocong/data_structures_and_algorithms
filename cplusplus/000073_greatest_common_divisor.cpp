// Title: Greatest Common Divisor
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Viết chương trình tìm ước số chung lớn nhất của 2 số nguyên dương a, b bằng phương pháp đệ quy.
 * Gợi ý: Sử dụng thuật toán Euclide.
 * 
 * Input:
 * Một dòng duy nhất gồm hai số nguyên dương a, b(a,b≤10^​6).
 * 
 * Output:
 * Một dòng duy nhất là ước chung lớn nhất của a và b.
 * 
 * Example 1:
 * Input:
 * 2 4
 * 
 * Output:
 * 2
 **/

#include <iostream>
using namespace std;

int gcd(int a, int b){
   if (b == 0)
      return a;
   return gcd(b, a % b);
}
int main() {
   int a,b;
   cin >> a >> b;
   cout << gcd(a, b);
   return 0;
}