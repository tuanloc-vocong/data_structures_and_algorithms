// Title: Odd Even Sort
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity:
// Topic:

/**
 * Cho mảng một chiều các số nguyên. Hãy sắp xếp sao cho các vị trí có giá trị chẵn tạo thành dãy tăng dần,
 * các vị trí có giá trị lẻ tạo thành dãy giảm dần.
 * 
 * Input:
 * Dòng đầu là số nguyên dương N (1≤N≤1000).
 * Dòng tiếp theo gồm N số nguyên a​i (0≤∣a​i∣≤1000).
 * 
 * Output:
 * Một dòng duy nhất gồm N phần tử của mảng sau khi đã sắp xếp số chẵn tăng dần và số lẻ giảm dần.
 * 
 * Example 1:
 * Input:
 * 5
 * 4 6 3 1 2
 * 
 * Output:
 * 2 4 3 1 6 
 **/

#include <iostream>    
using namespace std;  
int a[1003];  
int odd[1003], even[1003];  
int n, nOdd, nEven;  
void insertion_sort(int a[], int n){  
   for(int i = 1 ; i < n ; i++){  
      int cur = a[i];  
      int j = i - 1;  
      while(j >= 0 && a[j] > cur){  
         a[j+1] = a[j];  
         j--;  
      }  
      a[j+1] = cur;  
   }  
}  
void print(int a[] , int n){  
   for(int i = 0 ; i < n; i++){  
      cout << a[i] << " ";  
   }  
}  
  
int main(){  
   nOdd = nEven = 0;  
   cin >> n;  
   for(int i = 0 ; i < n ; i++){  
      cin >> a[i];  
      if(a[i] % 2 == 0){  
         even[nEven++]=a[i];  
      }  
      else  
         odd[nOdd++] = a[i];  
   }  
   insertion_sort(odd,nOdd);  
   insertion_sort(even,nEven);  
   int pa,pb; // j is iterator of even array , k is iterator of odd aray  
   pa = 0;  
   pb = nOdd -1;  
  
   for(int i = 0 ; i < n ; i++){  
      if(a[i] % 2 == 0){  
         cout<<even[pa++]<<" ";  
      }  
      else  
         cout<<odd[pb--]<<" ";  
   }    
  
   return 0;  
}  
