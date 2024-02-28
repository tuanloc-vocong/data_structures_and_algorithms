// Title: Array
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Algorithmic Complexity

/**
 * Bạn được cho một mảng a gồm n phần tử: a1,a2,...,an​​.
 *
 * Nhiệm vụ của bạn là tìm ra một đoạn tối thiểu [l,r] (1≤l≤r≤n) sao cho trong các phần tử al,al+1,..,ar​​, có đúng k giá trị phân biệt.
 *
 * Đoạn [l,r](1≤l≤r≤n; l,r là số nguyên) có độ dài m=r−l+1, thỏa mãn tính chất đã cho, được gọi là tối thiểu, nếu không có đoạn [x,y]
 * nào cũng thỏa mãn tính chất và có độ dài nhỏ hơn m, sao cho 1≤l≤x≤y≤r≤n. Lưu ý rằng đoạn [l,r] không cần phải có độ dài ngắn nhất
 * trong các đoạn thỏa mãn tính chất đã cho.
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên được phân tách bởi dấu cách: n và k (1≤n,k≤10^5). Dòng thứ hai chứa n số nguyên được phân tách bởi
 * dấu cách: a1,a2,...,an − các phần tử của mảng a (1≤ai≤10^5).
 *
 * Output:
 * In ra một cặp số được phân tách bởi dấu cách là l và r (1≤l≤r≤n), [l,r] là đáp án của bài toán. Nếu không có đoạn nào thỏa yêu cầu, in
 * ra “−1 −1” không có dấu nháy kép. Nếu có nhiều đáp án đúng thì in ra một đáp án bất kỳ trong số đó.
 *
 * Example 1:
 * Input:
 * 4 2
 * 1 2 2 3
 *
 * Output:
 * 1 2
 *
 * Example 2:
 * Input:
 * 8 3
 * 1 1 2 2 3 3 4 5
 *
 * Output:
 * 2 5
 *
 * Example 3:
 * Input:
 * 7 4
 * 4 7 7 4 7 4 7
 *
 * Output:
 * -1 -1
 **/

#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1e5 + 5;
int fre[MAX];

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int unique = 0;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (fre[a[i]] == 0)
        {
            unique++;
        }

        fre[a[i]]++;
        while (unique == k)
        {
            fre[a[j]]--;
            if (fre[a[j]] == 0)
            {
                cout << j + 1 << " " << i + 1;
                return 0;
            }
            j++;
        }
    }

    cout << "-1 -1";
    return 0;
}