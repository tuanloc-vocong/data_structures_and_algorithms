// Title: Arrays
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic: Dynamic Array & String

/**
 * Bạn được cho hai mảng A và B gồm các số nguyên được sắp xếp theo thứ tự không giảm. Kiểm tra xem có thể chọn k số từ mảng A
 * và m số từ mảng B sao cho mọi số được chọn trong mảng đầu tiên nhỏ hơn mọi số được chọn trong mảng thứ hai.
 *
 * Input:
 * Dòng đầu tiên gồm hai số nguyên nAn​​, nB​​ (1≤nA,nB≤10^5) cách nhau bởi khoảng trắng là kích thước của mảng A và B.
 * Dòng thứ hai gồm hai số nguyên k và m (1≤k≤nA,1≤m≤nb), cách nhau bởi khoảng trắng.
 * Dòng thứ ba gồm nA​ số a1,a2,...,anA (−10^9≤a1≤a2≤...≤anA≤10^9), cách nhau bởi khoảng trắng — những phần tử trong mảng A.
 * Dòng thứ tư gồm nB số b1,b2,...,bnB​​​​ (−10^9≤b1≤b2≤...≤bnB≤10^9), cách nhau bởi khoảng trắng — những phần tử trong mảng B.
 *
 * Output:
 * In "YES" (không có dấu nháy kép) nếu có thể chọn k số từ mảng A và m số từ mảng B sao cho mọi số được chọn từ mảng A nhỏ hơn
 * mọi số được chọn từ mảng B. Ngược lại, in "NO" (không có dấu nháy kép).
 *
 * Example 1:
 * Input:
 * 3 3
 * 2 1
 * 1 2 3
 * 3 4 5
 *
 * Output:
 * YES
 *
 * Example 2:
 * Input:
 * 3 3
 * 3 3
 * 1 2 3
 * 3 4 5
 *
 * Output:
 * NO
 *
 * Example 3:
 * Input:
 * 5 2
 * 3 1
 * 1 1 1 1 1
 * 2 2
 *
 * Output:
 * YES
 **/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int na, nb, k, m;
    cin >> na >> nb;
    cin >> k >> m;
    vector<int> a(na), b(nb);

    for (int i = 0; i < na; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < nb; i++)
    {
        cin >> b[i];
    }

    cout << (a[k - 1] < b[nb - m] ? "YES" : "NO");
    return 0;
}