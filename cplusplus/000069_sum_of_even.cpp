// Title: Sum Of Even
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic:

/**
 * Viết chương trình tính tổng các phần tử là số chẵn trong mảng 1 chiều số nguyên bằng phương pháp đệ quy.
 * 
 * Input:
 * Dòng đầu tiên chứa số nguyên dương N là số lượng phần tử trong mảng (N≤10000).
 * Dòng thứ hai là N số nguyên ai (∣a​i∣≤10000,0≤i<N).
 * 
 * Output:
 * Một dòng duy nhất là tổng các phần tử là số chẵn trong mảng.
 * 
 * Example 1:
 * Input:
 * 3
 * 4 2 5
 * 
 * Output:
 * 6
 **/

#include <iostream>
using namespace std;
int a[100005];
int sumEven(int a[], int n){
   if(n == 0)
      return 0;
   if(a[n - 1] % 2 == 0)
      return a[n - 1] + sumEven(a, n - 1);
   return sumEven(a, n - 1);
}
int main() {
   int n;
   cin >> n;
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   cout << sumEven(a, n);
   return 0;
}
