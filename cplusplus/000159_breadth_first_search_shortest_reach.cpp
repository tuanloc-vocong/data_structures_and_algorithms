// Title: Breadth First Search: Shortest Reach
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(T×(V+E)) với T là số lượng test, V là số lượng đỉnh trong đồ thị và E là số lượng cạnh trong đồ thị.
// Space Complexity:
// Topic: Breadth-First Search Algorithm

/**
 * Cho một đồ thị vô hướng bao gồm n đỉnh trong đó mỗi đỉnh được gán nhãn từ 1 đến n và cạnh giữa hai đỉnh bất kỳ luôn có độ dài
 * là 6. Chúng ta xác định đỉnh s là vị trí bắt đầu cho một BFS.
 *
 * Cho q truy vấn dưới dạng đồ thị và đỉnh s là vị trí bắt đầu, với mỗi truy vấn hãy tính khoảng cách ngắn nhất từ đỉnh bắt đầu
 * đến tất cả các đỉnh khác trong đồ thị. Sau đó in ra một dòng gồm n−1 các số nguyên được phân tách bằng dấu cách, liệt kê khoảng
 * cách ngắn nhất của đỉnh s tới mỗi n−1 đỉnh khác (sắp xếp theo thứ tự gán nhãn); nếu đỉnh s không đi đến được đỉnh đó, hãy in −1
 * là khoảng cách đến đỉnh đó.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên q, biểu thị số lượng truy vấn. Các dòng tiếp theo mô tả từng truy vấn theo định dạng sau:
 * Dòng đầu tiên chứa hai số nguyên được phân tách bằng dấu cách mô tả các giá trị tương ứng của n (số nút) và m (số cạnh) trong biểu đồ.
 * Mỗi dòng i trong số m dòng tiếp theo chứa hai số nguyên được phân cách bằng dấu cách u và v, mô tả một cạnh nối đỉnh u với đỉnh v.
 * Dòng cuối cùng chứa một số nguyên duy nhất s, biểu thị chỉ số của đỉnh bắt đầu.
 *
 * Constraints
 * 1≤q≤10
 * 2≤n≤1000
 * 1≤m≤n(n−1)/2
 * 1≤u,v,s≤n
 *
 * Output:
 * Đối với mỗi truy vấn q, hãy in một dòng gồm n−1 số nguyên được phân tách bằng dấu cách biểu thị khoảng cách ngắn nhất đến mỗi đỉnh
 * trong số n−1 đỉnh còn lại từ vị trí bắt đầu đỉnh s. Các khoảng cách này phải được liệt kê theo thứ tự gán nhãn (tức là 1,2,...,n),
 * nhưng không bao gồm đỉnh s. Nếu một số đỉnh không thể đi được từ đỉnh s, hãy in −1 làm khoảng cách đến đỉnh đó.
 *
 * Example 1:
 * Input:
 * 2
 * 4 2
 * 1 2
 * 1 3
 * 1
 * 3 1
 * 2 3
 * 2
 *
 * Output:
 * 6 6 -1
 * -1 6
 **/

#include <bits/stdc++.h>
#define MAX 1000 + 5

using namespace std;

int V, E;
bool visited[MAX];
int dist[MAX];
vector<int> graph[MAX];

void BFS(int s)
{
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int &v : graph[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int Q, u, v, s;
    cin >> Q;

    while (Q--)
    {
        cin >> V >> E;

        for (int i = 0; i < MAX; i++)
        {
            graph[i].clear();
            visited[i] = false;
            dist[i] = 0;
        }

        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        cin >> s;
        BFS(s);

        for (int i = 1; i <= V; i++)
        {
            if (i == s)
            {
                continue;
            }

            cout << (visited[i] ? dist[i] * 6 : -1) << " ";
        }

        cout << endl;
    }

    return 0;
}