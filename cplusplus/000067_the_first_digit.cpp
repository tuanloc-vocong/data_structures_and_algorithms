// Title: The First Digit
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Cho số nguyên N. Hãy viết chương trình tìm chữ số đầu tiên của N bằng phương pháp đệ quy.
 * 
 * Input:
 * Một dòng duy nhất là số nguyên N (∣N∣≤10^​6).
 * 
 * Output:
 * Một dòng duy nhất là chữ số đầu tiên của số N.
 * 
 * Example 1:
 * Input:
 * 435435
 * 
 * Output:
 * 4
 * 
 * Example 2:
 * Input:
 * -123
 * 
 * Output:
 * 1
 **/

#include <iostream>
using namespace std;

int firstDigit(int n){
   if(n < 10)
      return n;
   return firstDigit(n / 10);
}
int main() {
   int n;
   cin >> n;
   if(n < 0)
      cout << firstDigit(-n);
   else
      cout << firstDigit(n);
   return 0;
}