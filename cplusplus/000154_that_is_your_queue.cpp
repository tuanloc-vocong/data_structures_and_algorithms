// Title: That Is Your Queue
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(T×C×(min(P,C)+C))
// Space Complexity: O(1)
// Topic: Stack & Queue

/**
 * Chính phủ của bạn cuối cùng đã giải quyết được vấn đề chăm sóc sức khỏe toàn dân! Giờ đây, tất cả mọi người, dù giàu hay nghèo,
 * cuối cùng sẽ được tiếp cận với mức độ chăm sóc y tế như nhau. Hoan hô!
 *
 * Tuy nhiên, có một sự phức tạp nho nhỏ. Tất cả các bệnh viện của đất nước đã được tập trung vào một địa điểm, chỉ có thể chăm sóc
 * một người một lúc. Nhưng đừng lo lắng! Chúng ta cũng có một kế hoạch cho một hệ thống máy tính hiệu quả, công bằng để xác định ai
 * sẽ được nhận vào. Bạn là người phụ trách lập trình hệ thống này.
 *
 * Mỗi công dân trong quốc gia sẽ được gán một số duy nhất, từ 1 đến P (trong đó P là dân số hiện tại). Chúng sẽ được đưa vào một
 * hàng đợi, với 1 trước 2, 2 trước 3, v.v. Bệnh viện sẽ xử lý từng bệnh nhân một, theo thứ tự, từ hàng đợi này. Một khi công dân đã
 * được tiếp nhận, họ sẽ ngay lập tức di chuyển từ phía trước của hàng đợi ra phía sau.
 *
 * Tất nhiên, đôi khi có những trường hợp khẩn cấp phát sinh; nếu bạn vừa bị một chiếc xe hơi cuốn qua, bạn không thể đợi nửa đất
 * nước đi kiểm tra sức khỏe định kỳ trước khi được điều trị! Vì vậy, đối với những trường hợp (hy vọng là hiếm) này, có thể đưa ra
 * lệnh khẩn cấp để di chuyển một người lên phía trước hàng đợi. Thứ tự tương đối của những người khác sẽ không thay đổi.
 *
 * Cho dãy các xử lý và các lệnh khẩn cấp, xuất ra thứ tự mà công dân sẽ được nhập viện.
 *
 * Input:
 * Đầu vào bao gồm tối đa 10 trường hợp thử nghiệm. Mỗi trường hợp thử nghiệm bắt đầu bằng một dòng chứa P, dân số của quốc gia của
 * bạn (1≤P≤1000000000) và C, số lượng lệnh cần xử lý (1≤C≤1000).
 *
 * C dòng tiếp theo, mỗi dòng chứa một lệnh có dạng ′N′​, cho biết công dân tiếp theo sẽ được nhận vào, hoặc ′E​ x′​​, cho biết rằng công
 * dân x sẽ được cấp tốc lên trước hàng đợi.
 *
 * Trường hợp thử nghiệm cuối cùng là một dòng chứa hai số 0.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, in lần lượt dữ liệu ra. Mỗi một dòng là kết quả cho mỗi lệnh ‘N’, cho biết công dân nào sẽ được
 * xử lý tiếp theo. Quan sát dữ liệu ra đối với dữ liệu vào của ví dụ để biết chi tiết.
 *
 * Example 1:
 * Input:
 * 3 6
 * N
 * N
 * E 1
 * N
 * N
 * N
 * 10 2
 * N
 * N
 * 0 0
 *
 * Output:
 * Case 1:
 * 1
 * 2
 * 1
 * 3
 * 2
 * Case 2:
 * 1
 * 2
 **/

#include <iostream>
#include <queue>
#include <math.h>

using namespace std;

int main()
{
    int P, C, x, temp, tc = 1;
    char cmd;
    queue<int> q;

    while (true)
    {
        cin >> P >> C;
        if (P == 0 && C == 0)
        {
            break;
        }

        for (int i = 1; i <= min(P, C); i++)
        {
            q.push(i);
        }

        cout << "Case " << tc++ << ":" << endl;
        for (int i = 0; i < C; i++)
        {
            cin >> cmd;
            if (cmd == 'N')
            {
                temp = q.front();
                cout << temp << endl;
                q.pop();
                q.push(temp);
            }
            else
            {
                cin >> x;
                int n = q.size();
                q.push(x);

                for (int j = 0; j < n; j++)
                {
                    temp = q.front();
                    q.pop();
                    if (temp != x)
                    {
                        q.push(temp);
                    }
                }
            }
        }

        while (!q.empty())
        {
            q.pop();
        }
    }

    return 0;
}