// Title: Available Room
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

/**
 * Cho danh sách các phòng khách sạn gồm các thông tin {Mã phòng, Giá thuê, Tình trạng phòng: 0 - trống, 1 - đã được thuê}.
 * Hãy liệt kê các phòng trống.
 *
 * Input:
 * Dòng đầu tiên là 1 số nguyên dương N là số lượng phòng trong khách sạn (1≤N≤10^​3).
 *
 * N dòng tiếp theo, mỗi dòng gồm bộ 3 thông tin:
 * Mã phòng: là một dãy số có 7 chữ số.
 * Đơn giá thuê: là một số nguyên không âm không quá 10^6.
 * Tình trạng phòng: 0 hoặc 1 tương ứng với trống và không trống.
 *
 * Output:
 * In ra danh sách các phòng trống theo thứ tự của dữ liệu vào.
 * Mỗi dòng in thông tin của một phòng gồm mã phòng và đơn giá thuê cách nhau bởi khoảng trắng.
 *
 * Example 1:
 * Input:
 * 5
 * 000885 750 0
 * 000195 175 0
 * 000958 550 1
 * 000187 450 0
 * 001110 550 1
 *
 * Output:
 * 000885 750
 * 000195 175
 * 000187 450
 **/

#include <iostream>
#include <math.h>

using namespace std;

struct Room
{
    string id;
    int price;
    int booked;
};

struct Node
{
    Room data;
    Node *next;

    Node(Room value) : data(value), next(nullptr) {}
};

struct List
{
    Node *head;
    Node *tail;
};

int main()
{
    List list;
    list.head = nullptr;
    list.tail = nullptr;
    Room room;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> room.id >> room.price >> room.booked;
        Node *newNode = new Node(room);

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

    if (list.head == nullptr)
    {
        return 0;
    }

    Node *current = list.head;
    while (current != nullptr)
    {
        if (current->data.booked == 0)
        {
            cout << current->data.id << " " << current->data.price << endl;
        }
        current = current->next;
    }

    while (list.head != nullptr)
    {
        Node *current = list.head;
        list.head = current->next;
        delete current;
    }
}