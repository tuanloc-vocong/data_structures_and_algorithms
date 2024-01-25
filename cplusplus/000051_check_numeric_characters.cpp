// Title: Check Numeric Characters
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: String

/**
 * Viết chương trình đếm xem chuỗi đã cho có bao nhiêu ký tự là số.
 * 
 * Input:
 * Một dòng duy nhất là chuỗi ban đầu, bao gồm các ký tự từ ‘A’ → ‘Z’, ‘a’ → ‘z’, ’0’ → ‘9’ và khoảng trắng, độ dài của
 * chuỗi không quá 1000 ký tự.
 * 
 * Output:
 * Một dòng duy nhất là số lượng ký tự là số trong chuỗi.
 * 
 * Example 1:
 * Input:
 * Thu 6 la ngay 15 thang 9
 * 
 * Output:
 * 4
 **/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str[1001];
    cin.getline(str, 1001);

    int cntNum = 0;
    for(int i = 0; i < strlen(str); i++){
        if('0' <= str[i] && str[i] <= '9'){
            cntNum++;
        }
    }

    cout << cntNum;
    return 0;
}