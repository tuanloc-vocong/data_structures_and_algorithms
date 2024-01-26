// Title: Symmetrical String
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Recursion

/**
 * Cho một chuỗi s có độ dài n bao gồm các kí tự in hoa, thường và chữ số. Hãy kiểm tra xem chuỗi s có phải
 * là chuỗi đối xứng không.
 * 
 * Chuỗi đối xứng là chuỗi khi đọc từ trái sang phải hay phải sang trái đều giống nhau.
 * 
 * Input:
 * Dòng đầu tiên là số nguyên dương n(n≤10^​5).
 * 
 * Output:
 * Nếu s là chuỗi đối xứng, in "YES", ngược lại in "NO".
 * 
 * Example 1:
 * Input:
 * 5
 * aBcBa
 * 
 * Output:
 * YES
 * 
 * Example 2:
 * Input:
 * 3
 * abb
 * 
 * Output:
 * NO
 **/

#include <iostream>

using namespace std;

bool checkSym(char s[], int i, int j) {
    if (i >= j) return true;
    if (s[i] == s[j]) return checkSym(s, i + 1, j - 1);
    else return false;
}

int main() {
    int n;
    char s[100001];
    cin >> n;
    cin.ignore();
    cin.getline(s, 100001);

    if (checkSym(s, 0, n - 1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}