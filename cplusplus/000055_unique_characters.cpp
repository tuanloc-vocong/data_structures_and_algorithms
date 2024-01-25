// Title: Unique Characters
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: String

/**
 * Viết chương trình đếm số lượng ký tự trong một chuỗi.
 * 
 * Lưu ý: phân biệt chữ hoa và chữ thường.
 * 
 * Input:
 * Một dòng duy nhất là chuỗi ban đầu, bao gồm các ký tự từ 'A' → 'Z' và 'a' → 'z', độ dài của chuỗi không quá 1000 ký tự.
 * 
 * Output:
 * Một dòng duy nhất là số lượng ký tự khác nhau.
 * 
 * Example 1:
 * Input:
 * abccccbbb
 * 
 * Output:
 * 3
 **/

#include <iostream>
#include <string>

using namespace std;

int pos(char ch){
    if('A' <= ch && ch <= 'Z'){
        return ch - 'A';
    }
    return ch - 'a' + 26;
}

int main(){
    string str;
    getline(cin, str);
    int count[52] = {0};

    for(int i = 0; i < str.length(); i++){
        count[pos(str[i])]++;
    }

    int cnt = 0;
    for(int i = 0; i < 52; i++){
        if(count[i] != 0){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}