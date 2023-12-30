// Title: Count Primes
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Cho một mảng các số nguyên, hãy đếm xem mảng có bao nhiêu số nguyên tố.
 * 
 * Input:
 * Dòng đầu tiên bao gồm một số nguyên dương n là kích thước mảng (n≤1000).
 * Dòng thứ hai gồm n số nguyên ai là các phần tử của mảng, cách nhau bởi các khoảng trắng (∣ai∣≤1.000.000).
 * 
 * Output:
 * Một dòng duy nhất là số lượng số nguyên tố trong mảng.
 * 
 * Example 1:
 * Input:
 * 5
 * 1 2 3 0 -2
 * 
 * Output:
 * 2
 **/

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n, arr[1001];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt;
    for(int i = 0; i < n; i++){
        if(isPrime(arr[i])){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}