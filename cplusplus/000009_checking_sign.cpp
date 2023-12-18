// Title: Checking Sign
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình nhập vào hai số thực a và b khác 0. Kiểm tra xem chúng có cùng dấu hay không. Hai số thực
 * được gọi là “cùng dấu” nếu như chúng cùng dương hoặc cùng âm.
 * 
 * Input:
 * Một dòng duy nhất chứa hai số thực a, b khác 0 (∣a∣,∣b∣≤1000000)
 * 
 * Output:
 * Nếu a và b cùng dấu in ra "YES". Ngược lại a và b khác dấu in ra "NO".
 *  
 * Example 1:
 * Input:
 * 2.1 -4.5
 * 
 * Output:
 * NO
 * 
 * Example 2:
 * Input:
 * 2.1 4.5
 * 
 * Output:
 * YES
 **/

#include <iostream>

using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    if(a*b > 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}