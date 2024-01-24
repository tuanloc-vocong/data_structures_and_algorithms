// Title: Prime Numbers On The Main Diagonal
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(N∗N+N∗√max(aij))∈O(N∗N)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình đếm xem trên đường chéo chính của ma trận vuông có bao nhiêu số nguyên tố.
 * 
 * Input:
 * Dòng đầu tiên chứa số N là số dòng và số cột của ma trận (N≤1.000).
 * N dòng tiếp theo, mỗi dòng là N số nguyên dương a​ij (a​ij≤1.000 với 0≤i,j<N).
 * Dòng của ma trận được đánh số từ 0 đến N-1, và cột của ma trận được đánh số từ 0 đến N-1.
 * 
 * Output:
 * Một dòng duy nhất là số lượng số nguyên tố trên đường chéo chính của ma trận.
 * 
 * Example 1:
 * Input:
 * 4
 * 1 2 3 4
 * 5 6 7 8
 * 9 8 7 4
 * 1 5 9 7
 * 
 * Output:
 * 2
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
    int N, arr[1000][1000];
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(isPrime(arr[i][i])){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}