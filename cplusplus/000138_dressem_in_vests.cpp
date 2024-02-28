// Title: Dress'em In Vests!
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(max(n,m))
// Space Complexity: O(1)
// Topic: Algorithmic Complexity

/**
 * Vương quốc Hai chiều đang trải qua thời kỳ khó khăn ... Sáng nay vương quốc Ba chiều tuyên chiến với Vương quốc Hai chiều.
 * Xung đột (có thể có vũ trang) này sẽ xác định chủ sở hữu cuối cùng của đường thẳng.
 *
 * Vương quốc Hai chiều có một đội quân chính quy gồm n người. Mỗi người lính tự đăng ký và bày tỏ kích thước mong muốn của áo
 * chống đạn: người lính thứ i muốn có cỡ áo ai​​. Những người lính được biết là khiêm nhường, vì vậy ban chỉ huy cho rằng họ sẽ
 * cảm thấy thoải mái trong bất kỳ chiếc áo nào có kích thước từ ai−x đến ai+y (các số x,y≥0 được cho trước).
 *
 * Vương quốc Hai chiều có m chiếc áo, kích thước của áo thứ j là bj​. Hãy giúp động viên quân đội của vương quốc Hai chiều: trang
 * bị áo cho nhiều binh lính nhất có thể. Mỗi áo chỉ được sử dụng một lần. Người lính thứ i có thể mặc chiếc áo thứ j nếu ai−x≤bj≤ai+y.
 *
 * Input:
 * Dòng đầu tiên chứa bốn số nguyên n,m,x và y (1≤n,m≤10^5,0≤x,y≤10^9) - lần lượt là số lượng binh lính, số lượng áo chống đạn và
 * hai con số thể hiện sự khiêm nhường của người lính.
 *
 * Dòng thứ hai chứa n số nguyên a1,a2,...,an​ (1≤ai≤10^9) theo thứ tự không giảm, được phân tách bởi dấu cách - kích cỡ mong muốn của áo.
 *
 * Dòng thứ ba chứa m số nguyên b1,b2,...,bm​​ (1≤bj≤10^9) theo thứ tự không giảm, được phân tách bởi dấu cách - kích cỡ của áo có sẵn.
 *
 * Output:
 * Dòng đầu tiên in một số nguyên k - số lượng binh sĩ tối đa được trang bị áo chống đạn.
 *
 * k dòng tiếp theo, in k cặp số, mỗi cặp một dòng, dưới dạng "ui vi" (không có dấu ngoặc kép). Cặp (ui,vi) nghĩa là người lính số ui
 * phải mặc áo số vi. Binh lính và áo được đánh số bắt đầu từ 1 theo thứ tự được cho trước trong dữ liệu vào. Tất cả số thứ tự của binh
 * lính trong các cặp phải đôi một khác nhau, tất cả các số áo trong các cặp cũng phải đôi một khác nhau. Bạn có thể in các cặp theo
 * bất kỳ thứ tự nào.
 *
 * Nếu có nhiều câu trả lời tối ưu, bạn được phép in bất kỳ câu trả lời nào trong số đó.
 *
 * Example 1:
 * Input:
 * 5 3 0 0
 * 1 2 3 3 4
 * 1 3 5
 *
 * Output:
 * 2
 * 1 1
 * 3 2
 *
 * Example 2:
 * Input:
 * 3 3 2 2
 * 1 5 9
 * 3 5 7
 *
 * Output:
 * 3
 * 1 1
 * 2 2
 * 3 3
 **/

#include <iostream>
#include <vector>

using namespace std;

struct Vest
{
    int u, v;
};

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<Vest> v;
    for (int i = 0, j = 0; j < m; j++)
    {
        while (i < n && b[j] > a[i] + y)
        {
            i++;
        }

        if (i == n)
        {
            break;
        }

        if (a[i] - x <= b[j] && a[i] + y >= b[j])
        {
            v.push_back((Vest){i + 1, j + 1});
            i++;
        }
    }

    cout << v.size() << endl;
    for (Vest &vest : v)
    {
        cout << vest.u << " " << vest.v << endl;
    }

    return 0;
}