// Title: Count Images
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(m*n)
// Space Complexity: O(1)
// Topic: Matrix

/**
 * Một album ảnh trên mạng xã hội gồm các ảnh được hiển thị dưới dạng một ma trận có kích thước M×N. Biết số 
 * lượng like trên các bức ảnh, hãy cho biết có bao nhiêu ảnh trên 100 like.
 * 
 * Input:
 * Dòng đầu tiên chứa 2 số M,N là số dòng, số cột của ma trận (M,N≤1.000).
 * 
 * M dòng tiếp theo, mỗi dòng là N số nguyên không âm aij – số lượng like của ảnh tại ví trí (i,j) (aij≤1.000 với
 * 0≤i<M,0≤j<N).
 * 
 * Dòng của ma trận được đánh số từ 0 đến M−1, và cột của ma trận được đánh số từ 0 đến N−1.
 * 
 * Output:
 * Một dòng duy nhất là số ảnh trên 100 like.
 * 
 * Example 1:
 * Input:
 * 3 3
 * 105 50 60
 * 1 40 70
 * 51 800 30
 * 
 * Output:
 * 2
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

    int cnt = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > 100){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}