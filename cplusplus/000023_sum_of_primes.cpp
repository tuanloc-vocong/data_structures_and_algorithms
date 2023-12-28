// Title: Sum Of Primes
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n∗√n)
// Space Complexity: O(n)
// Topic:

/**
 * Hãy tính tổng các số nguyên tố nhỏ hơn N.
 * 
 * Input:
 * Một dòng duy nhất là số nguyên dương N (N≤1000)
 * 
 * Output:
 * In ra tổng các số nguyên tố nhỏ hơn N.
 *  
 * Example 1:
 * Input:
 * 1
 * 
 * Output:
 * 0
 * 
 * Example 2:
 * Input:
 * 6
 * 
 * Output:
 * 10
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
    int N, sum = 0;
    cin >> N;

    for(int i = 1; i < N; i++){
        if(isPrime(i)){
            sum += i;
        }
    }

    cout << sum;
    return 0;
}