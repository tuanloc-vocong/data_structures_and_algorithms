// Title: Create Matrix
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(m*n)
// Space Complexity: O(1)
// Topic:

/**
 * Cho hai giá trị đầu tiên của ma trận và một số p, bạn hãy tạo ra một ma trận từ 2 số ban đầu, biết giá trị sau bằng
 * tổng 2 giá trị trước cộng lại rồi lấy phần dư khi chia cho p, tính từ trái sang phải và từ trên xuống dưới.
 * 
 * Ví dụ: Ma trận 3×3, a=b=1, p=100:
 * 0	1	2
 * 0	1	1	2
 * 1	3	5	8
 * 2	13	21	34
 * 
 * Giá trị ô (0, 0) = a.
 * Giá trị ô (0, 1) = b.
 * Giá trị ô (0, 2) = (giá trị ô (0, 0) + giá trị ô (0, 1)) % p.
 * Giá trị ô (1, 0) = (giá trị ô (0, 2) + giá trị ô (0, 1)) % p.
 * Giá trị ô (1, 1) = (giá trị ô (1, 0) + giá trị ô (0, 2)) % p.
 * 
 * Input:
 * Dòng đầu tiên chứa 2 số M,N là số dòng, số cột của ma trận (2≤M,N≤1.000).
 * Dòng tiếp theo là 3 số a,b,p (a,b,p≤1.000).
 * 
 * Output:
 * Ma trận gồm M dòng và N cột.
 * 
 * Example 1:
 * Input:
 * 3 3
 * 1 1 100
 * 
 * Output:
 * 1 1 2 
 * 3 5 8 
 * 13 21 34 
 **/

#include <iostream>

using namespace std;

void input(int &m, int &n, int &a, int &b, int &p);
void generateMatrix(int m, int n, int a, int b, int p, int arr[][1000]);
void printMatrix(int m, int n, int arr[][1000]);

int main(){
    int m, n, a, b, p, arr[1000][1000];
    input(m, n, a, b, p);
    generateMatrix(m, n, a, b, p, arr);
    printMatrix(m, n, arr);
    return 0;
}

void input(int &m, int &n, int &a, int &b, int &p){
    cin >> m >> n;
    cin >> a >> b >> p;
}

void generateMatrix(int m, int n, int a, int b, int p, int arr[][1000]){
    arr[0][0] = a;
    arr[0][1] = b;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(!((i == 0 && j == 0) || (i == 0 && j == 1))){
                arr[i][j] = (a + b) % p;
                a = b;
                b = arr[i][j];
            }
        }
    }
}

void printMatrix(int m, int n, int arr[][1000]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}