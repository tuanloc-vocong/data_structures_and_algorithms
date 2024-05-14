// Title: Validate The Maze
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Breadth-First Search Algorithm

/**
 * Có nhiều thuật toán để tạo mê cung. (http://en.wikipedia.org/wiki/Maze\_generation\_algorithm). Sau khi tạo được mê cung,
 * chúng ta phải xác thực xem đó có phải là mê cung hợp lệ hay không. Một mê cung hợp lệ có chính xác một điểm vào và chính
 * xác một điểm ra (chính xác là 2 cửa mở ở các cạnh) và phải có ít nhất một con đường từ điểm vào đến điểm ra.
 *
 * Cho một mê cung, cần kiểm tra xem mê cung là "valid" hay "invalid".
 * Giới hạn dữ liệu đầu vào:
 * 1≤t≤10000
 * 1≤m≤20
 * 1≤n≤20
 *
 * Input:
 * Dòng đầu tiên bao gồm một số nguyên t, số lượng các trường hợp thử nghiệm. Sau đó, đối với mỗi trường hợp thử nghiệm, dòng đầu
 * tiên bao gồm hai số nguyên m và n, số hàng và cột trong mê cung. Tiếp đó chứa mô tả của ma trận M kích thước m x n. Mi,j='#'
 * đại diện cho một bức tường và Mi,j='.' đại diện cho một ô trống.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, hãy kiểm tra xem mê cung là "valid" hay "invalid".
 *
 * Example 1:
 * Input:
 * 6
 * 4 4
 * ####
 * #...
 * #.##
 * #.##
 * 5 5
 * #.###
 * #..##
 * ##..#
 * #.#.#
 * ###.#
 * 1 1
 * .
 * 5 1
 * #
 * #
 * .
 * .
 * #
 * 2 2
 * #.
 * .#
 * 3 4
 * #..#
 * #.##
 * #.##
 *
 * Output:
 * valid
 * valid
 * invalid
 * valid
 * invalid
 * invalid
 **/

#include <bits/stdc++.h>
#define MAX 21

using namespace std;

const int dr[] = {0, 0, 1, -1};
const int dc[] = {1, -1, 0, 0};
int n, m;
bool visited[MAX][MAX];
string maze[MAX];

struct Cell
{
    int r, c;
};

bool isValid(int r, int c)
{
    return r >= 0 && r < n && c >= 0 && c < m;
}

bool BFS(Cell s, Cell f)
{
    queue<Cell> q;
    visited[s.r][s.c] = true;
    q.push(s);

    while (!q.empty())
    {
        Cell u = q.front();
        q.pop();
    }
}

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> maze[i];
        }

        vector<Cell> entrance;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                visited[i][j] = false;
                if (maze[i][j] == '.' && (i == 0 || j == 0 || i == n - 1 || j == m - 1))
                {
                    entrance.push_back((Cell){i, j});
                }
            }
        }

        if (entrance.size() != 2)
        {
            cout << "invalid" << endl;
        }
        else
        {
            Cell s = entrance[0];
            Cell f = entrance[1];
            cout << (BFS(s, f) ? "valid" : "invalid") << endl;
        }
    }

    return 0;
}