// Title: The Number Of Digits
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Nhập vào một số nguyên N.
 * Bạn hãy viết chương trình đệ quy để đếm số lượng chữ số của số nguyên N.
 * 
 * Input:
 * Một dòng duy nhất là số nguyên N (∣N∣≤10^6).
 * 
 * Output:
 * Một dòng duy nhất là số lượng chữ số của số nguyên N.
 * 
 * Example 1:
 * Input:
 * 345234
 * 
 * Output:
 * 6
 **/

#include <iostream>

using namespace std;

int cntDigits(int n){
   if(n < 10)
      return 1;
   return 1 + cntDigits(n / 10);
}
int main() {
   int n;
   cin >> n;
   if(n < 0)
      cout << cntDigits(-n);
   else
      cout << cntDigits(n);
   return 0;
}