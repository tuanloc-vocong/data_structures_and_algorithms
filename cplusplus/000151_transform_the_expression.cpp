// Title: Transform The Expression
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(t×len(expression))
// Space Complexity: O(t)
// Topic: Stack & Queue

/**
 * Biến đổi biểu thức đại số có dấu ngoặc thành dạng RPN (Reverse Polish Notation - Ký Pháp Nghịch Đảo Ba Lan).
 *
 * Toán tử hai đối số: +, -, *, /, ^ (ưu tiên từ thấp nhất đến cao nhất).
 * Dấu ngoặc ().
 * Toán hạng: chỉ gồm các chữ cái: a,b,...,z.
 *
 * Giả sử rằng chỉ có một dạng RPN (không có biểu thức như a∗b∗c).
 *
 * Input:
 * t [số biểu thức ≤100]
 * biểu thức [độ dài ≤400]
 * [các biểu thức khác]
 * Văn bản trong [ ] không xuất hiện trong tệp đầu vào.
 *
 * Output:
 * Các biểu thức ở dạng RPN, mỗi biểu thức trên mỗi dòng.
 *
 * Example 1:
 * Input:
 * 3
 * (a+(b*c))
 * ((a+b)*(z+x))
 * ((a+t)*((b+(a+c))^(c+d)))
 *
 * Output:
 * abc*+
 * ab+zx+*
 * at+bac++cd+^*
 **/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

void transform(string expression)
{
    stack<char> s;
    for (char symbol : expression)
    {
        if (isalpha(symbol))
        {
            cout << symbol;
        }
        else if (symbol == ')')
        {
            cout << s.top();
            s.pop();
        }
        else if (symbol != '(')
        {
            s.push(symbol);
        }
    }
    cout << endl;
}

int main()
{
    int t;
    string expression;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> expression;
        transform(expression);
    }

    return 0;
}