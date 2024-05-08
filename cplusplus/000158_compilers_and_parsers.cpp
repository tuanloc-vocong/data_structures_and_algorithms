// Title: Compilers And Parsers
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(T×N)
// Space Complexity: O(1)
// Topic: Stack & Queue

/**
 * Lira hiện đang rất quan tâm đến việc phát triển trình biên dịch. Cô ấy biết rằng một trong những thành phần quan trọng nhất
 * của trình biên dịch, là trình phân tích cú pháp của nó.
 *
 * Nói một cách đơn giản, trình phân tích cú pháp là một thành phần phần mềm xử lý văn bản và kiểm tra tính đúng đắn về ngữ nghĩa
 * của văn bản, hoặc, nếu bạn thích, nếu văn bản được xây dựng đúng cách.
 *
 * Ví dụ: trong việc khai báo và khởi tạo một số nguyên, trong C/C++, bạn không thể làm điều gì đó như:
 * int = x ;4
 * vì ngữ nghĩa của câu lệnh như vậy không chính xác, bởi chúng ta đều biết rằng kiểu dữ liệu phải đứng trước tên biến và chỉ sau
 * đó mới xuất hiện dấu bằng và giá trị khởi tạo, do đó, câu lệnh đúng phải là:
 * int x = 4;
 *
 * Hôm nay, Lira quan tâm đến một chỉ thị trừu tượng bao gồm các ký tự "<" và ">", mà cô ấy sẽ sử dụng trong thiết kế ngôn ngữ của
 * mình, L++.
 *
 * Cô ấy đang sử dụng nó như một phần trừu tượng để tạo các thẻ mã XML theo cách dễ dàng hơn và cô ấy hiểu rằng, để một biểu thức
 * hợp lệ, một ký tự "<" phải luôn có một ký tự ">" tương ứng ở đâu đó (không cần thiết ngay lập tức) sau nó. Hơn nữa, mỗi ký tự ">"
 * phải tương ứng với chính xác một ký tự "<".
 *
 * Vì vậy, ví dụ, các chỉ thị:
 * <<>>
 * <>
 * <><>
 * đều hợp lệ. Trong khi:
 * >>
 * ><><
 * thì không.
 *
 * Cho các biểu thức đại diện cho một số chỉ thị sẽ được phân tích bởi trình biên dịch của Lira, bạn hãy cho biết độ dài của tiền
 * tố hợp lệ dài nhất trong mỗi biểu thức này hoặc in ra 0 nếu không có tiền tố nào như vậy.
 *
 * Input:
 * Đầu vào sẽ bao gồm một số nguyên T biểu thị số lượng trường hợp thử nghiệm.
 *
 * Sau đó là T xâu ký tự, mỗi xâu nằm trên một dòng, đại diện cho một biểu thức có thể có trong L++.
 * 1≤T≤500
 * 1≤ Độ dài của một biểu thức ≤10^6
 * Tổng kích thước của tất cả các biểu thức đầu vào không quá 5⋅10^6
 *
 * Output:
 * Đối với mỗi biểu thức, in ra độ dài của tiền tố hợp lệ dài nhất hoặc 0 nếu không có tiền tố nào như vậy.
 *
 * Example 1:
 * Input:
 * 3
 * <<>>
 * ><
 * <>>>
 *
 * Output:
 * 4
 * 0
 * 2
 **/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int T, ans;
    string s;
    cin >> T;

    for (int k = 0; k < T; k++)
    {
        cin >> s;
        stack<char> expr;
        ans = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '<')
            {
                expr.push(s[i]);
            }
            else if (expr.empty())
            {
                break;
            }
            else
            {
                expr.pop();
                ans = (expr.empty() ? i + 1 : ans);
            }
        }

        cout << ans << endl;
    }

    return 0;
}