// Title: The First Prime Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic:

/**
 * Cho một mảng các số nguyên, hãy tìm vị trí đầu tiên có giá trị là số nguyên tố.
 * 
 * Input:
 * Dòng đầu tiên là số nguyên n(n≤10000), số lượng phần tử trong mảng.
 * Dòng thứ hai là n số nguyên a​i (∣a​i∣≤10000,0≤i<n).
 * 
 * Output:
 * Một số duy nhất là vị trí đầu tiên có giá trị là số nguyên tố.
 * Nếu không tìm được vị trí nào thỏa mãn, in ra −1.
 * 
 * Example 1:
 * Input:
 * 4
 * 8 3 9 2
 * 
 * Output:
 * 1
 **/

#include <iostream>
#include <cmath> // pow
using namespace std;
int a[100005];

bool isPrime(int n){
   if(n < 2)
      return false;
   for(int i = 2 ; i <= sqrt(n) ;i++){
      if(n % i == 0){
         return false;
      }
   }
   return true;
}


int firstPrime(int a[],int index, int n){
   if (index == n)
      return -1;
   if (isPrime(a[index]))
      return index;
   return firstPrime(a,index + 1,n);
}
int main() {
   int n;
   cin >> n;
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
   cout << firstPrime(a, 0, n);
   return 0;
}