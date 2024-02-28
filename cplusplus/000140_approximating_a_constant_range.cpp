// Title: Approximating A Constant Range
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Algorithmic Complexity

/**
 * Khi Xellos đang thực hiện một khóa học thực hành ở trường đại học, anh ấy đã từng phải đo cường độ của một hiệu ứng từ từ tiến đến
 * trạng thái cân bằng. Một cách tốt để xác định cường độ bình quân sẽ là chọn một số lượng lớn nhất có thể các điểm dữ liệu liên tiếp
 * gần như không đổi và lấy giá trị trung bình của chúng. Tất nhiên, với kích thước thông thường của dữ liệu thì không có gì khó - nhưng
 * tại sao ta không đặt ra một vấn đề tương tự trong cuộc thi lập trình?
 *
 * Bạn được cung cấp một dãy gồm n điểm dữ liệu a1,...,an​​. Không có bất kỳ bước nhảy lớn nào giữa các điểm dữ liệu liên tiếp - với 1≤i<n,
 * ta đảm bảo rằng ∣ai+1−ai∣≤1.
 *
 * Đoạn dữ liệu [l,r] được cho là gần như không đổi nếu hiệu giữa giá trị lớn nhất và nhỏ nhất trong đoạn đó lớn nhất là 1. Về mặt hình
 * thức, gọi M là giá trị lớn nhất và m là giá trị nhỏ nhất của ai​​ với l≤i≤r; đoạn [l,r] gần như không đổi nếu M−m≤1.
 *
 * Tìm độ dài của đoạn dài nhất gần như không đổi.
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa một số nguyên duy nhất n (2≤n≤100 000) - số điểm dữ liệu.
 * Dòng thứ hai chứa n số nguyên a1,a2,...,an​​ (1≤ai≤100 000).
 *
 * Output:
 * In ra một số duy nhất - độ dài lớn nhất của một đoạn gần như không đổi của dãy đã cho.
 *
 * Example 1:
 * Input:
 * 5
 * 1 2 3 3 2
 *
 * Output:
 * 4
 *
 * Example 2:
 * Input:
 * 11
 * 5 4 5 5 6 7 8 8 8 7 6
 *
 * Output:
 * 5
 **/

#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1e5 + 5;
int fre[MAX];

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int j = 0, diff = 0;
    int longestRange = 0;

    for (int i = 0; i < n; i++)
    {
        if (fre[a[i]] == 0)
        {
            diff++;
        }
        fre[a[i]]++;

        while (j < n && diff > 2)
        {
            if (fre[a[j]] == 1)
            {
                diff--;
            }
            fre[a[j]]--;
            j++;
        }
        longestRange = max(longestRange, i - j + 1);
    }

    cout << longestRange;
    return 0;
}