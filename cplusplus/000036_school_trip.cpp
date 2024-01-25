// Title: School Trip
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Array

/**
 * Hôm nay Upan, Ipan và các bạn được một chuyến đi tham quan sở thú do nhà trường tổ chức. Nhà trường muốn tổ chức
 * một trò chơi vận động nhưng trò chơi này cần số lượng học sinh nam và số lượng học sinh nữ bằng nhau.
 * 
 * Cho danh sách gồm các số 0 và 1 với 0 là kí hiệu của học sinh nam, 1 là kí hiệu của học sinh nữ.
 * 
 * Nhà trường muốn biết liệu với danh sách này có thể tổ chức được trò chơi vận động đó không?
 * 
 * Input:
 * Dòng đầu tiên chứa số lượng học sinh là n (n không vượt quá 100000 học sinh).
 * Dòng thứ hai chứa n số nguyên 0 hoặc 1 cách nhau bởi 1 khoảng trắng.
 * 
 * Output:
 * In ra “YES” nếu nhà trường có thể tổ chức trò chơi vận động, ngược lại in ra “NO”.
 * 
 * Example 1:
 * Input:
 * 3
 * 0 1 0
 * 
 * Output:
 * NO
 **/

#include <iostream>

using namespace std;

int main(){
    int n, arr[100000];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int boys = 0;
    int girls = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            boys++;
        }else{
            girls++;
        }
    }

    if(boys == girls){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}