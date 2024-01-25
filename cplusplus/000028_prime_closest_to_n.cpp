// Title: Prime Closest To N
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n√n)
// Space Complexity: O(n√n)
// Topic: User Defined Function

/**
 * Cho một số nguyên dương n, hãy tìm số nguyên tố m gần nhất với n.
 * 
 * Nếu n là số nguyên tố thì m=n.
 * Giả sử có ba số a<b<c, số a được nói gần với b hơn so với c khi: b−a<c−b.
 * Nếu có hai số cùng gần với n thì chọn số nhỏ hơn.
 * 
 * Input:
 * Một số n duy nhất (2≤n≤10^4).
 * 
 * Output:
 * In ra số nguyên tố gần với n.
 *  
 * Example 1:
 * Input:
 * 5
 * 
 * Output:
 * 5
 * 
 * Example 2:
 * Input:
 * 4
 * 
 * Output:
 * 3
 * 
 * Example 3:
 * Input:
 * 10
 * 
 * Output:
 * 11
 **/

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }

    for(int i = 2; i <= sqrt(n) + 1; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int N, m, n;
    cin >> N;
    m = n = N;

    while(!isPrime(m)) m++;
    while(!isPrime(n)) n--;

    if(N - n <= m - N){
        cout << n;
    }else{
        cout << m;
    }

    return 0;
}