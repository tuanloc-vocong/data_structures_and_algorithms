// Title: Reversing
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: String

/**
 * Cho một câu gồm nhiều từ cách nhau bởi khoảng trắng, viết chương trình đảo ngược thứ tự các từ trong câu lại.
 * 
 * Input:
 * Mỗi chuỗi một dòng duy nhất là chuỗi, bao gồm các ký tự từ 'A' → 'Z', 'a' → 'z' và khoảng trắng, độ dài của chuỗi
 * không quá 1000 ký tự.
 * 
 * Output:
 * Dòng duy nhất là chuỗi sau khi đảo các từ lại.
 * 
 * Example 1:
 * Input:
 * I love you too
 * 
 * Output:
 * too you love I 
 **/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str[1001];
    char words[1000][1001];
    cin.getline(str, 1001);
    int n = strlen(str);
    int cnt = 0;
    int j = 0;

    for(int i = 0; i < n; i++){
        if(str[i] != ' '){
            words[cnt][j] = str[i];
            j++;
        }else{
            words[cnt][j] = '\0';
            cnt++;
            j = 0;
        }
    }

    if(j != 0){
        words[cnt][j] = '\0';
        cnt++;
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << words[i] << " ";
    }
    return 0;
}