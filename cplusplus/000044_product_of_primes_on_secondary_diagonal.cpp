// Title: Product Of Primes On Secondary Diagonal
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n∗n+n∗√max(aij))∈O(n∗n)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình tính tích các số nguyên tố trên đường chéo phụ của ma trận vuông các số nguyên.
 * Ma trận vuông là ma trận có số dòng bằng số cột.
 * Đường chéo phụ gồm những ô có dạng (i, n – i – 1) với 0≤i<n.
 * 
 * Input:
 * Dòng đầu tiên N là số dòng và số cột của ma trận (N≤1.000).
 * N dòng tiếp theo, mỗi dòng là N số nguyên dương a​ij(a​ij≤1.000 với 0≤i,j<N).
 * Dòng của ma trận được đánh số từ 0 đến N-1, và cột của ma trận được đánh số từ 0 đến N-1.
 * 
 * Output:
 * Một dòng duy nhất là tích của các số nguyên tố nằm trên đường chéo phụ của ma trận. Trường hợp không có
 * số nguyên tố nào trên đường chéo thì in ra 1.
 * 
 * Do kết quả có thể rất lớn nên chỉ cần in ra kết quả khi lấy module với 1.000.003
 * 
 * Example 1:
 * Input:
 * 3
 * 1 2 3
 * 5 4 1
 * 4 1 1
 * 
 * Output:
 * 3
 **/

#include <iostream>
#include <math.h>
#include <stdio.h>

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
    int n, arr[1000][1000];
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int ans = 1;
    for(int i = 0; i < n; i++){
        if(isPrime(arr[i][n-i-1])){
            ans = (ans * arr[i][n-i-1]) % 1000003;
        }
    }

    cout << ans;
    return 0;
}