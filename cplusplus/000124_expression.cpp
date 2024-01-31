// Title: Expression
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Petya đang học tại một ngôi trường và cậu rất yêu thích toán học. Lớp cậu đang học các biểu thức toán học. Vào buổi học
 * cuối cùng, cô giáo viết ba số nguyên dương a,b,c lên chiếc bảng đen. Việc cậu cần làm là chèn các dấu '+' và '*', và cả
 * những dấu ngoặc giữa các số để giá trị biểu thức thu được là lớn nhất có thể.
 *
 * Ví dụ, giả sử giáo viên viết lên bảng 3 số 1, 2 và 3 thì sau đây là một số trong các cách chèn các dấu phép toán và dấu ngoặc:
 * 1+2×3=7
 * 1×(2+3)=5
 * 1×2×3=6
 * (1+2)×3=9
 *
 * Lưu ý là bạn chỉ có thể chèn các toán tử vào giữa a và b, và giữa b và c, tức là bạn không được hoán đổi vị trí các con số.
 * Cụ thể là trong ví dụ trên bạn không thể tạo được biểu thức (1+3)×2.
 *
 * Dễ thấy rằng giá trị biểu thức lớn nhất bạn có thể thu được là 9.
 * Nhiệm vụ của bạn là giúp Petya tìm giá trị lớn nhất có thể tạo được từ 3 số a,b,c cho trước.
 *
 * Input:
 * Dữ liệu đầu vào bao gồm 3 số nguyên a,b,c theo thứ tự đó, mỗi số trên một dòng (1≤a,b,c≤10).
 *
 * Output:
 * In ra số nguyên duy nhất là giá trị biểu thức lớn nhất tìm được.
 *
 * Example 1:
 * Input:
 * 2
 * 10
 * 3
 *
 * Output:
 * 60
 *
 * Example 2:
 * Input:
 * 1
 * 2
 * 3
 *
 * Output:
 * 9
 **/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int res[6];
    res[0] = a + b + c;
    res[1] = a * b * c;
    res[2] = a + b * c;
    res[3] = a * b + c;
    res[4] = (a + b) * c;
    res[5] = a * (b + c);

    int ans = 0;
    for (int i = 0; i < 6; i++)
    {
        if (ans < res[i])
        {
            ans = res[i];
        }
    }
    cout << ans;
    return 0;
}