// Title: Throwing Cards Away I
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(t×n)
// Space Complexity: O(1)
// Topic: Stack & Queue

/**
 * Cho một bộ bài có thứ tự gồm n lá bài được đánh số từ 1 đến n với lá 1 ở trên cùng và lá n ở dưới cùng. Thao tác sau đây được
 * thực hiện miễn là có ít nhất hai lá trong bộ bài: Vứt bỏ lá bài trên cùng và di chuyển lá bài hiện đang ở trên cùng của bộ bài
 * xuống dưới cùng của bộ bài.
 *
 * Nhiệm vụ của bạn là tìm ra dãy các lá bài đã bỏ và cuối cùng, lá bài còn lại.
 *
 * Input:
 * Mỗi dòng đầu vào (trừ dòng cuối cùng) chứa một số n≤50. Dòng cuối cùng chứa ‘0’ và dòng này không được xử lý.
 *
 * Output:
 * Với mỗi số từ đầu vào sẽ tương ứng hai dòng đầu ra. Dòng đầu tiên là dãy các lá bài bị loại bỏ, dòng thứ hai cho biết lá cuối
 * cùng còn lại. Không dòng nào có khoảng trắng ở đầu hoặc cuối. Xem ví dụ để biết định dạng đúng.
 *
 * Example 1:
 * Input:
 * 7
 * 19
 * 10
 * 6
 * 0
 *
 * Output:
 * Discarded cards: 1, 3, 5, 7, 4, 2
 * Remaining card: 6
 * Discarded cards: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 4, 8, 12, 16, 2, 10, 18, 14
 * Remaining card: 6
 * Discarded cards: 1, 3, 5, 7, 9, 2, 6, 10, 8
 * Remaining card: 4
 * Discarded cards: 1, 3, 5, 2, 6
 * Remaining card: 4
 **/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n;
    queue<int> deck;
    vector<int> discarded_cards;

    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        for (int i = 1; i <= n; i++)
        {
            deck.push(i);
        }

        while (deck.size() >= 2)
        {
            discarded_cards.push_back(deck.front());
            deck.pop();
            deck.push(deck.front());
            deck.pop();
        }

        cout << "Discarded cards:";
        for (int i = 0; i < n - 1; i++)
        {
            if (i != 0)
            {
                cout << ",";
            }
            cout << " " << discarded_cards[i];
        }
        cout << endl;
        cout << "Remaining card: " << deck.front() << endl;

        deck.pop();
        discarded_cards.clear();
    }

    return 0;
}