// Title: Sereja And Dima
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Algorithmic Complexity

/**
 * Sereja và Dima chơi một trò chơi. Luật chơi rất đơn giản. Hai người chơi có n lá bài xếp trên một hàng. Mỗi lá chứa một con số,
 * tất cả các số trên các lá bài là phân biệt. Hai người chơi thay phiên nhau, Sereja chơi trước.
 *
 * Trong lượt của mình, người chơi có thể lấy một lá bài: lá ngoài cùng bên trái trên hàng hoặc lá ngoài cùng bên phải. Trò chơi kết
 * thúc khi không còn lá bài nào nữa. Người chơi có tổng con số trên các lá bài của mình lớn hơn ở cuối trò chơi là người chiến thắng.
 *
 * Sereja và Dima sử dụng chiến thuật tham lam. Mỗi người chọn lá bài có con số lớn hơn trong lượt chơi của mình.
 *
 * Inna là bạn của Sereja và Dima. Cô ấy biết hai người họ đang sử dụng chiến thuật nào, vì vậy cô ấy muốn xác định điểm số cuối cùng,
 * dựa trên trạng thái ban đầu của trò chơi. Hãy giúp cô ấy nhé.
 *
 * Input:
 * Dòng đầu tiên chứa số nguyên n (1≤n≤1000) - số lá bài trên bàn.
 * Dòng thứ hai chứa các số được phân tách bởi dấu cách là con số trên các lá bài từ trái sang phải. Con số trên các lá bài là các số
 * nguyên phân biệt từ 1 đến 1000.
 *
 * Output:
 * In ra hai số nguyên trên một dòng. Số đầu tiên là số điểm của Sereja khi kết thúc trò chơi, số thứ hai là số điểm của Dima khi kết
 * thúc trò chơi.
 *
 * Example 1:
 * Input:
 * 4
 * 4 1 2 10
 *
 * Output:
 * 12 5
 *
 * Example 2:
 * Input:
 * 7
 * 1 2 3 4 5 6 7
 *
 * Output:
 * 16 12
 **/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int res[2] = {0};
    int player = 0;
    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (cards[i] > cards[j])
        {
            res[player] += cards[i];
            i++;
        }
        else
        {
            res[player] += cards[j];
            j--;
        }
        player = 1 - player;
    }

    cout << res[0] << " " << res[1];
    return 0;
}