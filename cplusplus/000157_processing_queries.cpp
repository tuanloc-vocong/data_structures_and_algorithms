// Title: Processing Queries
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Stack & Queue

/**
 * Trong bài này, bạn phải mô phỏng quy trình làm việc của máy chủ một luồng. Có nn truy vấn cần xử lý, truy vấn thứ ii sẽ được tiếp nhận vào thời điểm tit​i​​ và cần được xử lý trong did​i​​ đơn vị thời gian. Tất cả tit​i​​ được đảm bảo là phân biệt.

Khi một truy vấn xuất hiện, máy chủ có thể phản ứng theo ba cách:

    Nếu máy chủ rảnh và hàng đợi truy vấn trống, thì máy chủ ngay lập tức bắt đầu xử lý truy vấn này.
    Nếu máy chủ đang bận và có ít hơn bb truy vấn trong hàng đợi, thì truy vấn mới sẽ được thêm vào cuối hàng đợi.
    Nếu máy chủ đang bận và đã có bb truy vấn đang chờ xử lý trong hàng đợi, thì truy vấn mới sẽ bị từ chối và sẽ không bao giờ được xử lý.

Ngay sau khi máy chủ hoàn tất quá trình xử lý một số truy vấn, nó sẽ chọn một truy vấn mới từ hàng đợi (tất nhiên là nếu hàng đợi không trống). Nếu truy vấn mới xuất hiện tại một thời điểm xx nào đó và máy chủ kết thúc xử lý một truy vấn khác vào đúng thời điểm đó, ta coi truy vấn đầu tiên được chọn từ hàng đợi và chỉ sau đó truy vấn mới xuất hiện.

Đối với mỗi truy vấn, hãy tìm thời điểm máy chủ hoàn tất xử lý nó hoặc in ra −1−1 nếu truy vấn này bị từ chối.

 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa hai số nguyên nn và bb (1≤n,b≤200000)(1≤n,b≤200000) — số lượng truy vấn và kích thước tối đa có thể có của hàng đợi truy vấn.

Sau đó là nn dòng với các mô tả truy vấn (theo thứ tự thời gian). Mỗi mô tả bao gồm hai số nguyên tit​i​​ và did​i​​ (1≤ti,di≤109)(1≤t​i​​,d​i​​≤10​9​​), trong đó tit​i​​ là thời điểm khi truy vấn thứ ii xuất hiện và did​i​​ là thời gian máy chủ cần để xử lý nó. Đảm bảo rằng ti−1<tit​i−1​​<t​i​​ đối với tất cả i>1i>1.

 *
 * Output:
 * In ra dãy nn số nguyên e1,e2,...,ene​1​​,e​2​​,...,e​n​​, trong đó eie​i​​ là thời điểm máy chủ sẽ hoàn tất xử lý truy vấn thứ ii (các truy vấn được đánh số theo thứ tự xuất hiện trong đầu vào) hoặc −1−1 nếu truy vấn tương ứng sẽ bị từ chối.
 *
 * Example 1:
 * Input:
 * Không có
 *
 * Output:
 * Hello, World!!!
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}