// Title: Processing Queries
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Stack & Queue

/**
 * Trong bài này, bạn phải mô phỏng quy trình làm việc của máy chủ một luồng. Có n truy vấn cần xử lý, truy vấn thứ i sẽ được
 * tiếp nhận vào thời điểm ti​​ và cần được xử lý trong di​ đơn vị thời gian. Tất cả ti​ được đảm bảo là phân biệt.
 *
 * Khi một truy vấn xuất hiện, máy chủ có thể phản ứng theo ba cách:
 * Nếu máy chủ rảnh và hàng đợi truy vấn trống, thì máy chủ ngay lập tức bắt đầu xử lý truy vấn này.
 * Nếu máy chủ đang bận và có ít hơn b truy vấn trong hàng đợi, thì truy vấn mới sẽ được thêm vào cuối hàng đợi.
 * Nếu máy chủ đang bận và đã có b truy vấn đang chờ xử lý trong hàng đợi, thì truy vấn mới sẽ bị từ chối và sẽ không bao giờ
 * được xử lý.
 *
 * Ngay sau khi máy chủ hoàn tất quá trình xử lý một số truy vấn, nó sẽ chọn một truy vấn mới từ hàng đợi (tất nhiên là nếu hàng
 * đợi không trống). Nếu truy vấn mới xuất hiện tại một thời điểm x nào đó và máy chủ kết thúc xử lý một truy vấn khác vào đúng
 * thời điểm đó, ta coi truy vấn đầu tiên được chọn từ hàng đợi và chỉ sau đó truy vấn mới xuất hiện.
 *
 * Đối với mỗi truy vấn, hãy tìm thời điểm máy chủ hoàn tất xử lý nó hoặc in ra −1 nếu truy vấn này bị từ chối.
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa hai số nguyên n và b (1≤n,b≤200000) — số lượng truy vấn và kích thước tối đa có thể có của hàng
 * đợi truy vấn.
 *
 * Sau đó là n dòng với các mô tả truy vấn (theo thứ tự thời gian). Mỗi mô tả bao gồm hai số nguyên ti​​ và di​​ (1≤ti,di≤10^9), trong
 * đó ti​​ là thời điểm khi truy vấn thứ i xuất hiện và di​​ là thời gian máy chủ cần để xử lý nó. Đảm bảo rằng ti−1<ti đối với tất cả i>1.
 *
 * Output:
 * In ra dãy n số nguyên e1,e2,...,en​​, trong đó ei​​ là thời điểm máy chủ sẽ hoàn tất xử lý truy vấn thứ i (các truy vấn được đánh
 * số theo thứ tự xuất hiện trong đầu vào) hoặc −1 nếu truy vấn tương ứng sẽ bị từ chối.
 *
 * Example 1:
 * Input:
 * 5 1
 * 2 9
 * 4 8
 * 10 9
 * 15 2
 * 19 1
 *
 * Output:
 * 11 19 -1 21 22
 *
 * Example 2:
 * Input:
 * 4 1
 * 2 8
 * 4 8
 * 10 9
 * 15 2
 *
 * Output:
 * 10 18 27 -1
 **/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, b;
    long long t, d, processing = 0;
    queue<long long> q;
    cin >> n >> b;

    for (int i = 0; i < n; i++)
    {
        cin >> t >> d;

        while (!q.empty() && q.front() <= t)
        {
            q.pop();
        }

        if (q.size() <= b)
        {
            processing = max(processing, t) + d;
            cout << processing << " ";
            q.push(processing);
        }
        else
        {
            cout << -1 << " ";
        }
    }

    return 0;
}