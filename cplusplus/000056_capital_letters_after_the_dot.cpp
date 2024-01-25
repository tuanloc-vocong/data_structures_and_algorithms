// Title: Capital Letters After The Dot
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: String

/**
 * Cho một chuỗi ký tự, hãy viết chương trình in hoa các ký tự đứng sau lần cặp kí tự dấu chấm và khoảng trắng
 * (′.′: dấu chấm đứng trước, khoảng trắng đứng sau).
 * 
 * Input:
 * Một dòng duy nhất là chuỗi ban đầu, bao gồm các ký tự từ 'A' → 'Z', 'a' → 'z', khoảng trắng và dấu chấm, độ dài
 * của chuỗi không quá 1000 ký tự.
 * 
 * Output:
 * Một dòng duy nhất là chuỗi sau khi được in hoa theo cầu.
 * 
 * Example 1:
 * Input:
 * I love you. more. than i can. say
 * 
 * Output:
 * I love you. More. Than i can. Say
 **/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char s[1001];
    cin.getline(s, 1001);
    int len = strlen(s);
    char ans[1001];

    for(int i = 0; i < len; i++){
        if(i >= 2 && s[i-2] == '.' && s[i-1] == ' ' && ('a' <= s[i] && s[i] <= 'z')){
            ans[i] = s[i] - 'a' + 'A';
        }else{
            ans[i] = s[i];
        }
    }

    ans[len] = '\0';
    cout << ans;
    return 0;
}