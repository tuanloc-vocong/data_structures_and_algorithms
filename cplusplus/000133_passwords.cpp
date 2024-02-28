// Title: Passwords
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n+length(s))
// Space Complexity: O(1)
// Topic: Dynamic Array & String

/**
 * Vanya cố gắng vào trang Codehorses. Anh ấy dùng n mật khẩu riêng biệt cho tất cả trang web, nhưng không nhớ đã dùng cái nào
 * trong lúc đăng ký Codehorses.
 *
 * Vanya nhập mật khẩu theo thứ tự độ dài không giảm, và nhập mật khẩu có cùng độ dài theo thứ tự tùy ý. Khi Vanya nhập đúng mật khẩu,
 * anh ấy được phép vào trang web. Vanya sẽ không nhập bất kỳ mật khẩu nào hai lần.
 *
 * Việc nhập mật khẩu bất kỳ sẽ tốn 1 giây. Nếu Vanya nhập sai mật khẩu k lần, thì 5 giây sau anh ta mới có thể thử lần tiếp theo.
 * Tại mỗi thời điểm Vanya có thể nhập mật khẩu, anh ta sẽ thực hiện ngay.
 *
 * Xác định Vanya cần bao nhiêu giây để vào Codehorses trong trường hợp tốt nhất (tốn ít giây nhất) và trường hợp xấu nhất (tốn nhiều giây nhất).
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên n và k (1≤n,k≤100) – số lượng mật khẩu của Vanya và số lần thử thất bại, bị chặn truy cập trang
 * trong 5 giây sau khi thử k lần thất bại.
 * n dòng tiếp theo chứa các mật khẩu, trên mỗi dòng là chuỗi riêng biệt khác rỗng gồm chữ cái và chữ số latin. Mỗi mật khẩu có chiều dài không quá 100.
 * Dòng cuối chứa mật khẩu Codehorses của Vanya. Đảm bảo mật khẩu Codehorses của Vanya là 1 trong n mật khẩu của anh ta.
 *
 * Output:
 * In 2 số nguyên – thời gian mà Vanya cần để vào được Codehorses trong trường hợp tốt nhất và trường hợp xấu nhất.
 *
 * Example 1:
 * Input:
 * 5 2
 * cba
 * abc
 * bb1
 * abC
 * ABC
 * abc
 *
 * Output:
 * 1 15
 *
 * Example 2:
 * Input:
 * 4 100
 * 11
 * 22
 * 1
 * 2
 * 22
 *
 * Output:
 * 3 4
 **/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k;
    int cnt[101] = {0};
    string s, password;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cnt[s.size()]++;
    }

    cin >> password;
    int bestTime = 0, worstTime = 0;

    for (int i = 0; i < password.size(); i++)
    {
        bestTime += cnt[i];
    }

    worstTime = bestTime + cnt[password.size()] - 1;
    bestTime += (bestTime / k) * 5;
    worstTime += (worstTime / k) * 5;

    cout << bestTime + 1 << " " << worstTime + 1;
    return 0;
}