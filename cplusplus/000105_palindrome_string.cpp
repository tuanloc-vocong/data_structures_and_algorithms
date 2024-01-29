// Title: Palindrome String
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Ipan rất thích những chuỗi ký tự đối xứng. Chúng ta đều biết một chuỗi được gọi là đối xứng nếu như ta đảo ngược chuỗi đó,
 * ta sẽ được một chuỗi giống với chuỗi ban đầu.
 * Bạn được cho một chuỗi ký tự có độ dài N. Bạn hãy giúp Ipan xem chuỗi ký tự đó có phải là chuỗi đối xứng hay không bằng
 * phương pháp dùng hàm đệ quy.
 *
 * Input:
 * Dòng thứ nhất gồm một số nguyên dương N duy nhất (1≤N≤100).
 * Dòng thứ hai là một chuỗi N ký tự in thường.
 *
 * Output:
 * In ra "YES" chuỗi đã cho là chuỗi đối xứng, ngược lại in "NO" (không in cặp dấu ngoặc).
 *
 * Example 1:
 * Input:
 * 3
 * aba
 *
 * Output:
 * YES
 **/

#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

bool check(char arr[], int l, int r)
{
    if (l == r)
    {
        return true;
    }

    if (l == r - 1 && arr[l] == arr[r])
    {
        return true;
    }

    if (arr[l] == arr[r])
    {
        return check(arr, l + 1, r - 1);
    }
    return false;
}

int main()
{
    char str[200];
    int n;
    cin >> n;
    cin.get();
    cin.getline(str, 200);

    if (check(str, 0, n - 1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}