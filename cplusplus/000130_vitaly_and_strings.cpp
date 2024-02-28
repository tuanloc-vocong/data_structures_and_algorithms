// Title: Vitaly And Strings
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Dynamic Array & String

/**
 * Vitaly là một cậu học sinh chăm chỉ chưa từng nghỉ một buổi học nào trong năm năm học ở trường đại học. Cậu ta luôn làm bài
 * đúng giờ và qua mọi kỳ thi.
 *
 * Trong buổi học cuối cùng giảng viên cho Vitaly hai chuỗi s và t. Hai chuỗi có cùng độ dài, gồm các ký tự latin in thường,
 * chuỗi s có thứ tự từ điển nhỏ hơn chuỗi t. Vitaly muốn biết có một chuỗi nào có thứ tự từ điển lớn hơn chuỗi s và đồng thời
 * có thứ tự từ điển nhỏ hơn chuỗi t hay không. Chuỗi này chỉ gồm các ký tự latin in thường và có độ dài bằng với chuỗi s và t.
 *
 * Hãy giúp Vitaly giải bài tập này nhé!
 *
 * Chuỗi s=s1s2...sn có thứ tự từ điển nhỏ hơn chuỗi t=t1t2...tn nếu tồn tại giá trị i sao cho: s1=t1,s2=t2,...,si−1=ti−1,si<ti
 *
 * Input:
 * Dòng đầu tiên chứa chuỗi s (1≤∣s∣≤100) gồm các ký tự tiếng Anh viết thường.
 * Dòng thứ hai chứa chuỗi t (|t| = |s|) gồm các chữ cái tiếng Anh viết thường.
 * Chắc chắn rằng chuỗi s và t có cùng độ dài và chuỗi s có thứ tự từ điển nhỏ hơn chuỗi t.
 *
 * Output:
 * Nếu không tồn tại chuỗi thỏa yêu cầu thì in một dòng "No such string" không có nháy kép.
 * Nếu tồn tại chuỗi thì in ra chuỗi đó. Nếu có nhiều chuỗi thỏa mãn thì có thể in bất kỳ chuỗi nào trong số đó.
 *
 * Example 1:
 * Input:
 * k
 * m
 *
 * Output:
 * l
 *
 * Example 2:
 * Input:
 * klmnopq
 * klmpopq
 *
 * Output:
 * klmnopr
 *
 * Example 3:
 * Input:
 * abcde
 * abcdf
 *
 * Output:
 * No such string
 **/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'z')
        {
            s[i] = 'a';
        }
        else
        {
            s[i]++;
            break;
        }
    }

    cout << (s == t ? "No such string" : s);
    return 0;
}