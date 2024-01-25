// Title: Prime Numbers On The Border
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(m∗n+(m+n)∗√max(aij)​)∈O(m∗n)
// Space Complexity: O(1)
// Topic: Matrix

/**
 * Đếm xem trên biên của ma trận có bao nhiêu phần tử là số nguyên tố.
 * 
 * Số nguyên tố là số chỉ có hai ước nguyên dương là 1 và chính nó. Số 1 không phải là số nguyên tố,
 * số 2 là số nguyên tố.
 * 
 * Input:
 * Dòng đầu tiên chứa 2 số M, N là số dòng và số cột của ma trận (2≤M,N≤1.000).
 * M dòng tiếp theo, mỗi dòng là N số nguyên dương aij(aij≤1.000 với 0≤i<M,0≤j<N).
 * Dòng của ma trận được đánh số từ 0 đến M−1, và cột của ma trận được đánh số từ 0 đến N−1.
 * 
 * Output:
 * In ra một số duy nhất là số lượng số nguyên tố trên biên của ma trận.
 * 
 * Example 1:
 * Input:
 * 5 5
 * 1 2 3 4 5
 * 6 7 8 9 10
 * 1 2 8 7 6
 * 5 7 6 3 2
 * 1 7 8 9 6
 * 
 * Output:
 * 6
 **/

#include <iostream>
#include <cmath>

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
    int m, n, arr[1000][1000];
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < m; i++){
        if(isPrime(arr[i][0])){
            cnt++;
        }

        if(isPrime(arr[i][n-1])){
            cnt++;
        }
    }

    for(int j = 1; j < n - 1; j++){
        if(isPrime(arr[0][j])){
            cnt++;
        }

        if(isPrime(arr[m-1][j])){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}