// Title: Column Of Negative Numbers
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(m*n)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình liệt kê các cột toàn âm của ma trận các số nguyên.
 * 
 * Input:
 * Dòng đầu tiên chứa 2 số M, N là số dòng và số cột của ma trận (M,N≤1.000).
 * M dòng tiếp theo, mỗi dòng là N số nguyên aij (∣aij∣≤1.000,a​ij≠0 với 0≤i<M,0≤j<N).
 * Dòng của ma trận được đánh số từ 0 đến M−1, và cột của ma trận được đánh số từ 0 đến N−1.
 * 
 * Output:
 * In ra số thứ tự các cột chứa toàn giá trị âm trên cùng một dòng (cách nhau bởi dấu khoảng trắng)
 * theo thứ tự tăng dần. Dữ liệu đảm bảo luôn ít nhất có một cột toàn số âm.
 * 
 * Example 1:
 * Input:
 * 3 4
 * -1 -5 6 2
 * -5 -9 0 -2
 * 3 -1 0 15
 * 
 * Output:
 * 1
 **/

#include <iostream>

using namespace std;

bool isAllNegatives(int arr[1000][1000], int m, int col){
    bool flag = true;
    for(int i = 0; i < m; i++){
        if(arr[i][col] >= 0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int m, n, arr[1000][1000];
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int j = 0; j < n; j++){
        if(isAllNegatives(arr, m, j)){
            cout << j << ' ';
        }
    }
    return 0;
}