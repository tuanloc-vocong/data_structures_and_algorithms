// Title: Fashion In Berland
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Dynamic Array & String

/**
 * Theo quy tắc về thời trang của đất nước Berland, tất cả nút trên áo đều phải được cài trừ một nút duy nhất không cần phải cài.
 * Tuy nhiên trong trường hợp đặc biệt với chiếc áo chỉ có đúng một nút thì nút đó phải được cài để áo không bị bay.
 *
 * Bạn được cho một chiếc áo với N nút. Xác định xem áo đã được cài đúng hay chưa.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên N (1≤N≤1000) – số lượng nút trên áo.
 * Dòng tiếp theo lần lượt chứa N số là đại diện cho nút cài (số 1) hoặc nút không cài (số 0).
 *
 * Output:
 * In ra YES nếu áo được cài đúng quy tắc, ngược lại in ra NO.
 *
 * Example 1:
 * Input:
 * 3
 * 1 0 0
 *
 * Output:
 * NO
 *
 * Example 2:
 * Input:
 * 3
 * 1 0 1
 *
 * Output:
 * YES
 **/

#include <iostream>
#include <vector>

using namespace std;

bool checkJacket(vector<int> &v, int n)
{
    if (n == 1)
    {
        if (v[0] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            count++;
        }
    }

    if (count == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, value;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    bool result = checkJacket(v, n);
    if (result)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}