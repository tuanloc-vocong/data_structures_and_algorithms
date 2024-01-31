// Title: Cipher
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: String

/**
 * Để tránh bị người khác nhìn thấy tin nhắn, Harry đã chuyển đoạn tin nhắn thành một loại mật mã mà chỉ có Harry
 * hiểu được. Cách Hary thực hiện như sau:
 * Đầu tiên, anh ấy tách chuỗi ban đầu ra làm 2 chuỗi, 1 chuỗi toàn các ký tự lẻ, chuỗi còn lại chứa toàn ký tự chẵn.
 * Sau đó, anh ấy tạo một mật mã bằng cách ghép 2 chuỗi lại với nhau sau khi đã đảo ngược chuỗi chứa các ký tự chẵn.
 *
 * Input:
 * Gồm một dòng duy nhất là đoạn tin nhắn của Harry. Đoạn tin nhắn được biểu diễn dưới dạng chuỗi, bao gồm các ký tự
 * Alphabet thường và khoảng trắng. Độ dài chuỗi không quá 100 ký tự.
 *
 * Output:
 * Một dòng duy nhất, in ra mật mã sau khi đã được chuyển đổi theo cách của Harry.
 *
 * Example 1:
 * Input:
 * disinterested
 *
 * Output:
 * dessnreteitid
 **/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    char t[51];
    int len_t = 0;

    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            t[len_t] = s[i];
            len_t++;
        }
    }

    for (int i = 0, j = 0; i < strlen(s); i++)
    {
        if (i % 2 != 0)
        {
            cout << t[j];
            j++;
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}