// Title: Check For Euler's Cycle
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic: Graphs

/**
 * Cho ma trận kề của đồ thị vô hướng liên thông, hãy kiểm tra đồ thị có phải là chu trình Euler hay không. Nếu có
 * in ra “YES” ngược lại in ra “NO”.
 *
 * Ta có các định nghĩa sau:
 * Đường đi Euler là một cách đi sao cho mọi cạnh của đồ thị đều được đi qua.
 * Chu trình Euler là một đường đi Euler, trong đó điểm kết thúc đường đi cũng chính là điểm đầu xuất phát.
 * Đồ thị Euler là đồ thị có chứa ít nhất một chu trình Euler.
 *
 * Năm 1735, nhà toán học Leonhard Euler trình bày lời giải về bài toán nổi tiếng bảy cây cầu ở Königsberg - một
 * thành phố ở Đức.
 *
 * Thành phố Königsberg, khi ấy thuộc Vương quốc Phổ nằm bên bờ sông Pregel, trong đó có hai đảo lớn được nối với
 * nhau và với đất liền bằng 7 cây cầu. Bài toán đặt ra là liệu có con đường nào để đi liền một mạch mà mỗi lần chỉ
 * đi qua đúng một cầu và quay trở lại điểm xuất phát. Câu trả lời là không tồn tại con đường như vậy, hay không tồn
 * tại một đường đi Euler. Lời giải này được coi như là định lý đầu tiên trong lĩnh vực lý thuyết đồ thị, đặc biệt là
 * lý thuyết đồ thị phẳng.
 *
 * Và từ đó, ông đưa ra định lý Euler như sau: Đồ thị (vô hướng) liên thông G là đồ thị Euler khi và chỉ khi mọi đỉnh
 * của G đều có bậc chẵn.
 *
 * Input:
 * Dòng đầu tiên là số lượng đỉnh của đồ thị N (1<N≤10^3).
 * N dòng tiếp theo, mỗi dòng gồm N số 0 hoặc 1 biểu diễn thành ma trận kề C của đồ thị.
 *
 * Nếu Cij=0: không có cạnh giữa hai đỉnh i,j.
 * Nếu Cij≠0: có cạnh giữa hai đỉnh i,j.
 *
 * Mặc định Cii=0 với mọi i (0≤i<N).
 * Các đỉnh được đánh số từ 0 đến N−1.
 * Dữ liệu đảm bảo đồ thị đã cho là đơn đồ thị liên thông và vô hướng.
 *
 * Output:
 * In “YES” nếu đồ thị là chu trình Euler, ngược lại in ra “NO”. Không in dấu “ “.
 *
 * Example 1:
 * Input:
 * 2
 * 0 1
 * 1 0
 *
 * Output:
 * NO
 *
 * Example 2:
 * Input:
 * 3
 * 0 1 1
 * 1 0 1
 * 1 1 0
 *
 * Output:
 * YES
 **/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int graph[1000][1000];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int degree = 0;
        for (int j = 0; j < n; j++)
        {
            degree += graph[i][j];
        }

        if (degree % 2 != 0)
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}