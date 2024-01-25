// Title: Count Queens
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^3)
// Space Complexity: O(1)
// Topic: Matrix

/**
 * Đếm số lượng các phần tử giá trị "Hoàng Hậu" trên ma trận vuông. Một giá trị được gọi là Hoàng Hậu khi
 * nó là giá trị lớn nhất trên dòng, trên cột và hai đường chéo đi qua nó. Mô tả:
 * 
 * Input:
 * Dòng đầu tiên chứa số N là số dòng và số cột của ma trận (N≤100).
 * N dòng tiếp theo, mỗi dòng là N số nguyên dương aij (aij≤1.000 với 0≤i,j<N).
 * Dòng của ma trận được đánh số từ 0 đến N−1, và cột của ma trận được đánh số từ 0 đến N−1.
 * 
 * Output:
 * Một dòng duy nhất là số lượng các phần tử có giá trị hoàng hậu.
 * 
 * Example 1:
 * Input:
 * 3
 * 1 5 6
 * 3 5 9
 * 8 4 2
 * 
 * Output:
 * 2
 * 
 * Example 2:
 * Input:
 * 8
 * 651 594 882 260 544 320 607 177
 * 74 336 897 319 600 995 69 848
 * 856 841 647 423 555 113 96 554
 * 678 120 801 694 267 356 351 405
 * 519 841 455 996 85 331 348 744
 * 451 30 47 34 844 131 575 951
 * 454 547 593 941 500 888 385 883
 * 166 442 954 273 928 304 242 952
 * 
 * Output:
 * 3
 * 
 * Example 3:
 * Input:
 * 3
 * 1 2 1
 * 2 1 1
 * 1 1 2
 * 
 * Output:
 * 3
 **/

#include <iostream>

using namespace std;

void input(int &n, int arr[][1000]);
bool isQueen(int x, int y, int n, int arr[][1000]);
int countQueen(int n, int arr[][1000]);

int main(){
    int n, arr[1000][1000];
    input(n, arr);
    cout << countQueen(n, arr);
    return 0;
}

void input(int &n, int arr[][1000]){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
}

bool isQueen(int x, int y, int n, int arr[][1000]){
    int max = arr[x][y];
    for(int i = 0; i < n; i++){
        if(max < arr[i][y]){
            max = arr[i][y];
        }
    }

    for(int j = 0; j < n; j++){
        if(max < arr[x][j]){
            max = arr[x][j];
        }
    }

    int i = x, j = y;
    while(i >= 0 && j >= 0){
        if(arr[i][j] > max){
            max = arr[i][j];
        }
        i--;
        j--;
    }

    i = x;
    j = y;
    while(i < n && j < n){
        if(arr[i][j] > max){
            max = arr[i][j];
        }
        i++;
        j++;
    }

    i = x;
    j = y;
    while(i >= 0 && j < n){
        if(arr[i][j] > max){
            max = arr[i][j];
        }
        i--;
        j++;
    }

    i = x;
    j = y;
    while(i < n && j >= 0){
        if(arr[i][j] > max){
            max = arr[i][j];
        }
        i++;
        j--;
    }

    return max == arr[x][y];
}

int countQueen(int n, int arr[][1000]){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(isQueen(i, j, n, arr)){
                cnt++;
            }
        }
    }
    return cnt;
}