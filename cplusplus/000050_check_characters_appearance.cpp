// Title: Check Characters' Appearance
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: String

/**
 * Cho một chuỗi kí tự, hãy kiểm tra xem có xuất hiện một trong các ký tự ‘B’, ‘I, ‘G’ hoặc ‘O’ trong chuỗi hay không?
 * (Không phân biệt chữ hoa hay chữ thường). Nếu có in ra "YES", ngược lại in ra "NO".
 * 
 * Input:
 * Một dòng duy nhất chứa chuỗi kí tự có độ dài không quá 1000 ký tự.
 * 
 * Output:
 * In ra “YES” hoặc “NO” tương ứng với điều kiện như mô tả (không có dấu ngoặc kép).
 * 
 * Example 1:
 * Input:
 * Big-O Coding
 * 
 * Output:
 * YES
 **/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n;
    char ls[8] = {'B', 'b', 'I', 'i', 'G', 'g', 'O', 'o'};
    char str[1001];

    cin.getline(str, 1001);
    bool flag = false;

    for(int i = 0; i < strlen(str); i++){
        for(int j = 0; j < 8; j++){
            if(str[i] == ls[j]){
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}