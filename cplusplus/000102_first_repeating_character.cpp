// Title: First Repeating Character
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: String

/**
 * Cho một chuỗi gồm có N (0<N≤1000) ký tự 'a' - 'z', 'A' – 'Z', tìm ký tự lặp lại đầu tiên của chuỗi
 * (phân biệt hoa thường).
 *
 * Input:
 * Gồm một dòng duy nhất chính là chuỗi cần tìm ký tự lặp lại đầu tiên. Độ dài của chuỗi không vượt quá 1000, chuỗi gồm có
 * các ký tự từ 'a' đến 'z' và từ 'A' đến 'Z'.
 *
 * Output:
 * Một dòng duy nhất in ra ký tự lặp lại đầu tiên của chuỗi (phân biệt hoa thường), nếu không tìm được ký tự lặp lại trong
 * chuỗi in ra "null" (không bao gồm dấu nháy kép).
 *
 * Example 1:
 * Input:
 * BigOCoding
 *
 * Output:
 * i
 *
 * Example 2:
 * Input:
 * GrEEnCourse
 *
 * Output:
 * E
 *
 * Example 3:
 * Input:
 * Algorithm
 *
 * Output:
 * null
 **/

#include <iostream>

using namespace std;

int position(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a';
    }
    return c - 'A' + 26;
}

int main()
{
    int cnt[52];
    for (int i = 0; i < 52; i++)
    {
        cnt[i] = 0;
    }

    char s[1001];
    char ans[] = "null";
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        int index = position(s[i]);
        cnt[index]++;

        if (cnt[index] == 2)
        {
            ans[0] = s[i];
            ans[1] = '\0';
            break;
        }
    }

    cout << ans;
    return 0;
}