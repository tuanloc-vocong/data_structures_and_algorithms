// Title: Fibonacci Linked List
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

/**
 * Cho bạn 3 số nguyên x, y và n. Bạn hãy tạo một danh sách liên kết các số nguyên theo luật Fibonacci như sau:
 * Node đầu tiên chứa x.
 * Node thứ 2 chứa y.
 * Các node sau, mỗi node chứa tổng của 2 node liền trước nó (lấy phần dư khi chia cho 1.000.007).
 *
 * Biết rằng danh sách này có n node.
 *
 * Input:
 * Dữ liệu đầu vào chứa một dòng duy nhất chứa 3 số nguyên x, y và n. (0≤x,y≤10^​6,2≤n≤10^5).
 *
 * Output:
 * Một dòng duy nhất, in ra n số nguyên là các phần tử trong danh sách liên kết, các số ngăn cách nhau bởi một khoảng trắng.
 *
 * Example 1:
 * Input:
 * 1 1 5
 *
 * Output:
 * 1 1 2 3 5
 **/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

struct ListNode
{
    Node *head;
    Node *tail;
};

int main()
{
    ListNode list;
    list.head = nullptr;
    list.tail = nullptr;
    int x, y, n, temp;

    cin >> x >> y >> n;
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

    newNode = new Node(y);
    list.tail->next = newNode;
    list.tail = newNode;

    for (int i = 0; i < n - 2; i++)
    {
        temp = (x + y) % 1000007;
        Node *newNode = new Node(temp);
        list.tail->next = newNode;
        list.tail = newNode;
        x = y;
        y = temp;
    }

    Node *current = list.head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    return 0;
}