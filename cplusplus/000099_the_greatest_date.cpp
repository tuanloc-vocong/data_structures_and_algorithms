// Title: The Greatest Date
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

/**
 * Cho danh sách liên kết đơn các ngày gồm 3 thông tin {ngày, tháng, năm}. Tìm ngày lớn nhất trong danh sách
 * đã cho. Ghi chú: ngày lớn nhất là ngày có khoảng cách lớn nhất với ngày 1/1/1
 *
 * Input:
 * Dòng thứ nhất gồm 1 số nguyên dương N là số lượng phần tử (1≤N≤10^​5).
 * N dòng tiếp theo, mỗi dòng gồm 1 bộ 3 số nguyên lần lượt là ngày, tháng và năm của ngày tương ứng.
 * Dữ liệu đảm bảo ngày / tháng / năm hợp lệ.
 *
 * Output:
 * Một dòng duy nhất gồm ba số nguyên là ngày, tháng và năm của ngày mới nhất trong danh sách, cách nhau bởi khoảng trắng.
 *
 * Example 1:
 * Input:
 * 3
 * 31 1 2017
 * 1 12 2017
 * 5 9 2017
 *
 * Output:
 * 1 12 2017
 **/

#include <iostream>
#include <math.h>

using namespace std;

struct Date
{
    int day, month, year;
};

struct Node
{
    Date data;
    Node *next;

    Node(Date value) : data(value), next(nullptr) {}
};

struct List
{
    Node *head;
    Node *tail;
};

int compare(Date d1, Date d2)
{
    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.year > d2.year)
    {
        return 1;
    }

    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }

    if (d1.day < d2.day)
    {
        return -1;
    }

    if (d1.day > d2.day)
    {
        return 1;
    }
    return 0;
}

Node *max(List &list)
{
    if (list.head == nullptr)
    {
        return nullptr;
    }

    Node *current = list.head;
    Node *max = list.head;

    while (current != nullptr)
    {
        if (compare(current->data, max->data) == 1)
        {
            max = current;
        }
        current = current->next;
    }
    return max;
}

int main()
{
    List list;
    list.head = nullptr;
    list.tail = nullptr;
    Date d;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> d.day >> d.month >> d.year;
        Node *newNode = new Node(d);
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

    Node *ans = max(list);
    if (ans != nullptr)
    {
        cout << ans->data.day << " " << ans->data.month << " " << ans->data.year;
    }

    while (list.head != nullptr)
    {
        Node *current = list.head;
        list.head = list.head->next;
        delete current;
    }
}