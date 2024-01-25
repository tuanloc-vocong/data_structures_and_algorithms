// Title: Row With Most Even Numbers
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(m*n)
// Space Complexity: O(m)
// Topic: Matrix

/**
 * Cho một ma trận số nguyên, tìm dòng chứa nhiều số chẵn nhất.
 * 
 * Input:
 * Dòng đầu tiên chứa 2 số M,N là số dòng và số cột của ma trận (M,N≤1.000).
 * M dòng tiếp theo, mỗi dòng là N số nguyên dương aij (aij≤1.000 với 0≤i<M,0≤j<N).
 * Dòng của ma trận được đánh số từ 0 đến M−1, và cột của ma trận được đánh số từ 0 đến N−1.
 * 
 * Output:
 * Một dòng duy nhất là số thứ tự của dòng chứa nhiều số chẵn nhất. Dữ liệu đảm bảo luôn có ít nhất một dòng
 * ít nhất một số chẵn.
 * 
 * Nếu có nhiều kết quả, chỉ cần in ra dòng có số thứ tự nhỏ nhất.
 * 
 * Example 1:
 * Input:
 * 2 3
 * 1 2 3
 * 2 2 1
 * 
 * Output:
 * 1
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

    int maxEven = 0;
    int index = -1;

    for(int i = 0; i < m; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[i][j] % 2 == 0){
                cnt++;
            }
        }

        if(maxEven < cnt){
            maxEven = cnt;
            index = i;
        }
    }

    cout << index;
    return 0;
}