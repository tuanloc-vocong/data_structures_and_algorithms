// Title: Sum Of Each Line
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(m*n)
// Space Complexity: O(m)
// Topic:

/**
 * Viết chương trình tính tổng của từng dòng trong ma trận số nguyên.
 * 
 * Input:
 * Dòng đầu tiên chứa 2 số M, N là số dòng và số cột của ma trận (M,N≤1.000). M dòng tiếp theo, mỗi dòng là N
 * số nguyên aij​​ (∣a​ij​​∣≤1.000 với 0≤i<M,0≤j<N).
 * 
 * Dòng của ma trận được đánh số từ 0 đến M−1, và cột của ma trận được đánh số từ 0 đến N−1.
 * 
 * Output:
 * M dòng, mỗi dòng có theo cú pháp:
 * <chỉ số dòng>: <tổng các phần tử trên dòng đó>
 * 
 * Example 1:
 * Input:
 * 3 4
 * 2 1 4 3
 * 0 0 0 0
 * 1 0 9 2
 * 
 * Output:
 * 0: 10
 * 1: 0
 * 2: 12
 **/

#include <iostream>

using namespace std;

int main(){
    int m, n, arr[1000][1000];
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
        cout << i << ": " << sum << endl;
    }
    return 0;
}