// Title: Prime number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
// Topic:

/**
 * Số nguyên tố là các số nguyên dương chỉ có hai ước số dương phân biệt là 1 và chính nó. Các số có nhiều hơn
 * 2 ước số dương được gọi là hợp số.
 * 
 * Do số 1 chỉ có duy nhất một ước số dương là chính nó, nên số 1 không phải là số nguyên tố và cũng không phải là hợp số.
 * 
 * Cho một số nguyên dương, kiểm tra số đó có phải số nguyên tố hay không?
 * 
 * Input:
 * Gồm 1 dòng duy nhất chứa một số nguyên dương n (n≤1000)
 * 
 * Output:
 * In ra “YES” nếu n là số nguyên tố, ngược lại in ra “NO”.
 *  
 * Example 1:
 * Input:
 * 3
 * 
 * Output:
 * YES
 * 
 * Example 2:
 * Input:
 * 34
 * 
 * Output:
 * NO
 **/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = true;

    if(n < 2){
        flag = false;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}