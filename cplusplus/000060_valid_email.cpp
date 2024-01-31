// Title: Valid Email
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: String

/**
 * Bobo hiện tại đang làm nhân viên marketing cho công ty PaPa, nhân dịp cuối năm công ty có tổ chức sự kiện
 * tặng quà tri ân cho khách hàng nhưng mỗi khách hàng muốn nhận được quà phải điền địa chỉ email của mình vào
 * phiếu thông tin. Tuy nhiên có một số khách hàng muốn nhận được nhiều quà hơn nên đã ghi “khống” địa chỉ email
 * nhiều lần. Công ty giao nhiệm vụ cho Bobo hãy lọc ra các địa chỉ email không hợp lệ, tuy nhiên có tới hơn 1000
 * phiếu thông tin để lọc. Nghe nói các học viên Big-O rất giỏi về thuật toán nên Bobo nhờ các bạn học viên hãy
 * viết giùm cho Bobo một chương trình có thể lọc ra các email không hợp lệ.
 *
 * Một email hợp lệ là:
 * 1.Gồm có hai phần Local Part và Domain Name ngăn cách nhau bởi một ký tự ‘@’ duy nhất: <Local Part>@<Domain Name>.
 * 2.Phần Local Part gồm các ký tự ‘A’ – ‘Z’, ‘a’ – ‘z’, ‘0’ – ‘9’ và ký tự đặc biệt: ‘.’ và ‘_’.
 * 3.Domain Name gồm các ký tự ‘A’ – ‘Z’, ‘a’ – ‘z’ và ‘.’.
 * 4.Domain Name phải có ít nhất một ký tự ‘.’.
 * 5.Domain Name không được có hai ký tự ‘.’ liên tiếp.
 * 6.Local Part và Domain Name không được rỗng.
 *
 * Lưu ý: email đầu vào để kiểm tra có thể chứa khoảng trắng (space).
 *
 * Input:
 * Gồm một dòng duy nhất là chuỗi s (3≤∣s∣≤1000) – địa chỉ email cần kiểm tra tính hợp lệ.
 *
 * Output:
 * Nếu chuỗi s​ là một email hợp lệ in ra “VALID”, ngược lại in ra “INVALID”.
 *
 * Example 1:
 * Input:
 * bigo_coding@gmail.com
 *
 * Output:
 * VALID
 *
 * Example 2:
 * Input:
 * 4melove_......_@love.forever
 *
 * Output:
 * VALID
 *
 * Example 3:
 * Input:
 * 75_HuynhTinhCua@abcd..xyz
 *
 * Output:
 * INVALID
 *
 * Example 4:
 * Input:
 * _i_LOVE_you@somuch
 *
 * Output:
 * INVALID
 *
 * Example 5:
 * Input:
 * ____....._____@special@day
 *
 * Output:
 * INVALID
 **/

#include <iostream>
#include <cstring>

using namespace std;

bool isCharacter(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    return false;
}

bool isDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return true;
    }
    return false;
}

int main()
{
    char str[1001];
    cin.getline(str, 1001);
    int index = 0, cnt = 0;
    bool isLocalPartValid = true, isDomainNameValid = true;

    while (index < strlen(str) && str[index] != '@')
    {
        char ch = str[index];
        if (!(isCharacter(ch) || isDigit(ch) || ch == '.' || ch == '_'))
        {
            isLocalPartValid = false;
        }
        cnt++;
        index++;
    }

    if (cnt == 0)
    {
        isLocalPartValid = false;
    }

    index++;
    cnt = 0;
    int dot = 0;

    while (index < strlen(str))
    {
        char ch = str[index];
        if (!(isCharacter(ch) || ch == '.'))
        {
            isDomainNameValid = false;
        }

        if (ch == '.')
        {
            dot++;
            if (str[index - 1] == '.')
            {
                isDomainNameValid = false;
            }
        }
        cnt++;
        index++;
    }

    if (cnt == 0 || dot == 0)
    {
        isDomainNameValid = false;
    }

    if (isDomainNameValid && isLocalPartValid)
    {
        cout << "VALID";
    }
    else
    {
        cout << "INVALID";
    }
    return 0;
}