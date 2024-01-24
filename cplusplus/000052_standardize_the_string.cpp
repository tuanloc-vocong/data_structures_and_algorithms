// Title: Standardize The String
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Một chuỗi được xem là đã được chuẩn hóa khi các từ trong chuỗi cách nhau đúng một khoảng trắng và không có
 * khoảng trắng ở đầu hoặc cuối chuỗi. Bạn hãy viết một chương trình chuẩn hóa chuỗi.
 * 
 * Input:
 * Một dòng duy nhất là chuỗi ban đầu, bao gồm các ký tự từ ‘A’ đến ‘Z’, ‘a’ đến ‘z’ và khoảng trắng, độ dài
 * của chuỗi không quá 1000 ký tự.
 * 
 * Output:
 * Một dòng duy nhất là chuỗi sau khi được chuẩn hóa.
 * 
 * Example 1:
 * Input:
 *    like  a motor bike    
 * 
 * Output:
 * like a motor bike
 **/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[1001];
    cin.getline(str, 1001);

    char res[1001];
    int resLen = 0;
    bool needASpace = false;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' '){
            if(resLen > 0){
                needASpace = true;
            }
        }else{
            if(needASpace){
                res[resLen] = ' ';
                resLen++;
                res[resLen] = str[i];
                resLen++;
                needASpace = false;
            }else{
                res[resLen] = str[i];
                resLen++;
            }
        }
    }

    res[resLen] = '\0';
    cout << res;
    return 0;
}