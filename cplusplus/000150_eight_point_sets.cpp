// Title: Eight Point Sets
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(nlog(n))
// Space Complexity: O(1)
// Topic: Sorting

/**
 * Gerald rất tỉ mỉ với bộ tám điểm. Ông cho rằng bất cứ một tập 8 điểm hợp lệ nào đều phải thuộc tập các giao điểm của 3 đường
 * thẳng phân biệt song song với trục hoành và 3 đường thẳng phân biệt song song với trục tung trừ giao điểm chính giữa.
 *
 * Nói cách khác, phải có ba số nguyên x1,x2,x3​ và ba số nguyên khác y1,y2,y3​, sao cho x1<x2<x3, y1<y2<y3 và tập tám điểm bao gồm
 * tất cả các điểm (xi,yj) (1≤i,j≤3), ngoại trừ điểm (x2,y2).
 *
 * Bạn có một tập hợp tám điểm. Hãy xem nó có thỏa yêu cầu của Gerald hay không?
 *
 * Input:
 * Đầu vào bao gồm tám dòng, dòng thứ i chứa hai số nguyên được phân tác bằng dấu cách là xi​​ và yi​​ (0≤xi,yi≤10^6).
 * Bạn không có bất kỳ điều kiện nào khác cho những điểm này.
 *
 * Output:
 * In một dòng duy nhất "respectable", nếu tập hợp điểm đã cho phù hợp với quy tắc của Gerald và "ugly" nếu không.
 *
 * Example 1:
 * Input:
 * 0 0
 * 0 1
 * 0 2
 * 1 0
 * 1 2
 * 2 0
 * 2 1
 * 2 2
 *
 * Output:
 * respectable
 *
 * Example 2:
 * Input:
 * 0 0
 * 1 0
 * 2 0
 * 3 0
 * 4 0
 * 5 0
 * 6 0
 * 7 0
 *
 * Output:
 * ugly
 *
 * Example 3:
 * Input:
 * 1 1
 * 1 2
 * 1 3
 * 2 1
 * 2 2
 * 2 3
 * 3 1
 * 3 2
 *
 * Output:
 * ugly
 **/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1e6 + 5;
bool fre_x[MAX], fre_y[MAX];

struct Point
{
    int x, y;
    bool operator<(const Point &another)
    {
        return (x < another.x || (x == another.x && y < another.y));
    }
};

int main()
{
    int x, y;
    vector<int> unique_x, unique_y;
    vector<Point> points;

    for (int i = 0; i < 8; i++)
    {
        cin >> x >> y;
        points.push_back({x, y});

        if (!fre_x[x])
        {
            fre_x[x] = true;
            unique_x.push_back(x);
        }

        if (!fre_y[y])
        {
            fre_y[y] = true;
            unique_y.push_back(y);
        }
    }

    if (unique_x.size() != 3 || unique_y.size() != 3)
    {
        cout << "ugly";
        return 0;
    }

    sort(unique_x.begin(), unique_x.end());
    sort(unique_y.begin(), unique_y.end());
    sort(points.begin(), points.end());
    int index = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && i == 1)
            {
                continue;
            }

            if (unique_x[i] == points[index].x && unique_y[j] == points[index].y)
            {
                index++;
            }
            else
            {
                cout << "ugly";
                return 0;
            }
        }
    }

    cout << "respectable";
    return 0;
}