// Title: Linked List
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(max(m,n))
// Space Complexity: O(max(m,n))
// Topic: Singly Linked List

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
 * tính là một phần tử của LinkedList), cũng như đánh dấu kết thúc dữ liệu đầu vào. Phần tử LinkedList thứ hai là
 * từ hàng sau hàng chứa "-1" xuất hiện đầu tiên đến hàng cuối cùng chứa “-1” xuất hiện lần thứ hai.
 *
 * Mỗi phần tử của LinkedList là một số nguyên dương có giá trị không vượt quá 10^6​.
 * Số lượng phần tử mỗi LinkedList không vượt quá 10^5​​.
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
 **/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

struct LinkedList
{
    Node *head, *tail;
};

void insertTail(LinkedList &list, int x)
{
    Node *newNode = new Node(x);
    if (list.head == nullptr)
    {
        list.head = list.tail = newNode;
    }
    else
    {
        list.tail->next = newNode;
        list.tail = newNode;
    }
}

void getIntersection(LinkedList l1, LinkedList l2)
{
    Node *current1 = l1.head, *current2 = l2.head;
    Node *pre1 = nullptr, *pre2 = nullptr;
    bool hasIntersection = false;

    while (current1 != nullptr && current2 != nullptr)
    {
        if (current1->data < current2->data || (pre1 != nullptr && current1->data == pre1->data))
        {
            pre1 = current1;
            current1 = current1->next;
        }
        else if (current1->data > current2->data || (pre2 != nullptr && current2->data == pre2->data))
        {
            pre2 = current2;
            current2 = current2->next;
        }
        else
        {
            hasIntersection = true;
            cout << current1->data << " ";
            pre1 = current1;
            current1 = current1->next;
            pre2 = current2;
            current2 = current2->next;
        }
    }

    if (!hasIntersection)
        cout << "NO INTERSECTION";
}

int main()
{
    LinkedList l1, l2;
    l1.head = l1.tail = nullptr;
    l2.head = l2.tail = nullptr;
    int n;

    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        insertTail(l1, n);
    }

    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        insertTail(l2, n);
    }

    getIntersection(l1, l2);
    return 0;
}