// Title: Saddle Values
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(m*n*max(m,n))
// Space Complexity: O(1)
// Topic:

/**
 * Đếm số lượng phần tử "yên ngựa" trên ma trận. Một phần tử được gọi là yên ngựa khi nó lớn nhất trong
 * dòng và nhỏ nhất trên cột.
 * 
 * Input:
 * Dòng đầu tiên chứa 2 số M,N là số dòng, số cột của ma trận (M,N≤100).
 * M dòng tiếp theo, mỗi dòng là N số nguyên không âm aij (aij≤1.000 với 0≤i<M,0≤j<N).
 * Dòng của ma trận được đánh số từ 0 đến M−1, và cột của ma trận được đánh số từ 0 đến N−1.
 * 
 * Output:
 * Một dòng duy nhất là số lượng phần tử yên ngựa.
 * 
 * Example 1:
 * Input:
 * 3 3
 * 6 3 8
 * 6 1 9
 * 7 0 12
 * 
 * Output:
 * 1
 * 
 * Example 2:
 * Input:
 * 4 3
 * 8 8 6
 * 9 7 10
 * 9 7 8
 * 8 8 1
 * 
 * Output:
 * 2
 **/

#include <iostream>

using namespace std;

bool checkMaxRow(int arr[][1000], int n, int row, int col){
    for(int j = 0; j < n; j++){
        if(arr[row][j] > arr[row][col]){
            return false;
        }
    }
    return true;
}

bool checkMinCol(int arr[][1000], int m, int row, int col){
    for(int i = 0; i < m; i++){
        if(arr[i][col] < arr[row][col]){
            return false;
        }
    }
    return true;
}

bool isSaddle(int arr[][1000], int m, int n, int row, int col){
    if(checkMaxRow(arr, n, row, col) && checkMinCol(arr, m, row, col)){
        return true;
    }
    return false;
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
        for(int j = 0; j < n; j++){
            if(isSaddle(arr, m, n, i, j)){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}