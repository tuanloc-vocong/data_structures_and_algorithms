// Title: Linked List
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho hai LinkedList có các phần tử được sắp xếp theo thứ tự không giảm. Hãy tìm tập giao của hai LinkedList này.
 * Tập giao của hai LinkedList là một danh sách gồm các phần tử (các phần tử này là duy nhất trong toàn bộ danh
 * sách) đều có mặt trong cả hai LinkedList, thứ tự của danh sách theo thứ tự tăng dần.
 *
 * Input:
 * Gồm nhiều dòng, mỗi dòng là một phần tử của LinkedList.
 *
 * Dòng chứa “-1” xuất hiện đầu tiên đánh dấu kết thúc danh sách phần tử của LinkedList thứ nhất (“-1” không được
 * tính là một phần tử của LinkedList). Phần tử LinkedList thứ nhất là từ hàng đầu tiên đến hàng cuối cùng trước
 * hàng chứa “-1” xuất hiện đầu tiên.
 *
 * Dòng chứa "-1” xuất hiện lần thứ hai đánh dấu kết thúc danh sách phần tử của LinkedList thứ hai (“-1” không được
 * tính là một phần tử của LinkedList), cũng như đánh dấu kết thúc dữ liệu đầu vào. Phần tử LinkedList thứ hai là từ
 * hàng sau hàng chứa "-1" xuất hiện đầu tiên đến hàng cuối cùng chứa “-1” xuất hiện lần thứ hai.
 *
 * Mỗi phần tử của LinkedList là một số nguyên dương có giá trị không vượt quá 10^6​.
 *
 * Số lượng phần tử mỗi LinkedList không vượt quá 10^5​.
 *
 * Output:
 * Một dòng duy nhất, in ra danh sách các phần tử trong tập giao hai LinkedList theo thứ tự tăng dần, cách nhau bởi
 * đúng một khoảng trắng.
 *
 * Trong trường hợp tập giao hai LinkedList là rỗng in ra “NO INTERSECTION”.
 *
 * Example 1:
 * Input:
 * 1
 * 5
 * 9
 * 17
 * -1
 * 6
 * 9
 * 17
 * 21
 * 25
 * 33
 * 45
 * -1
 *
 * Output:
 * 9 17
 *
 * Example 2:
 * Input:
 * 1
 * 5
 * 5
 * 6
 * 8
 * 8
 * 11
 * 23
 * 100
 * -1
 * 5
 * 6
 * 8
 * 8
 * 8
 * -1
 *
 * Output:
 * 5 6 8
 *
 * Example 3:
 * Input:
 * 2
 * 4
 * 6
 * -1
 * 3
 * 5
 * 7
 * -1
 *
 * Output:
 * NO INTERSECTION
 *
 * Explanation:
 * Ví dụ 1:
 * LinkedList thứ nhất gồm có các phần tử [1, 5, 9, 17]. LinkedList thứ hai gồm có các phần tử [6, 9, 17, 21, 25, 33, 45].
 * Vậy tập giao hai LinkedList theo thứ tự tăng dần là [9, 17].
 *
 * Ví dụ 2:
 * LinkedList thứ nhất gồm có các phần tử [1, 5, 5, 6, 8, 8, 11, 23, 100]. LinkedList thứ hai gồm có các phần tử [5, 6, 8,
 * 8, 8]. Vậy tập giao hai LinkedList theo thứ tự tăng dần là [5, 6, 8].
 *
 * Ví dụ 3:
 * LinkedList thứ nhất gồm có các phần tử [2, 4, 6]. LinkedList thứ hai gồm có các phần tử [3, 5, 7]. Vậy tập giao hai
 * LinkedList là rỗng, in ra “NO INTERSECTION”.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}