// Title: Create List
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

/**
 * Cho danh sách liên kết các số nguyên. Hãy xây dựng danh sách liên kết mới từ danh sách đã cho với quy luật như sau:
 * Node đầu tiên trong danh sách mới là node đầu tiên trong danh sách đã cho.
 * Node thứ i trong danh sách mới chứa tổng của node thứ i và node trước i trong danh sách đã cho. (i≥2)
 * In ra danh sách mới.
 *
 * Input:
 * Gồm 2 dòng:
 * Dòng đầu tiên là 1 số nguyên dương N là số lượng phần tử trong danh sách ban đầu (1≤N≤10^5).
 * Dòng thứ hai chứa N số nguyên là các phần tử trong danh sách ban đầu và có giá trị tuyệt đối không vượt quá 10^6.
 *
 * Output:
 * Một dòng duy nhất chứa các phần tử trong danh sách mới được xây dựng theo quy luật trên, cách nhau bởi một khoảng trắng.
 *
 * Example 1:
 * Input:
 * 5
 * 3 5 1 -1 4
 *
 * Output:
 * 3 8 6 0 3
 **/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = nullptr;
    }

    Node(int _data)
    {
        data = _data;
        next = nullptr;
    }
};

struct LinkedList
{
    Node *head, *tail;
    LinkedList()
    {
        head = tail = nullptr;
    }

    void insertTail(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }

    LinkedList newList()
    {
        LinkedList new_list;
        if (head == nullptr)
            return new_list;

        Node *prev = nullptr;
        Node *current = head;

        while (current != nullptr)
        {
            if (current == head)
            {
                new_list.insertTail(current->data);
            }
            else
            {
                new_list.insertTail(prev->data + current->data);
            }
            prev = current;
            current = current->next;
        }
        return new_list;
    }
};

int main()
{
    LinkedList list;
    int n, temp;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        list.insertTail(temp);
    }

    LinkedList new_list = list.newList();
    new_list.printList();
    return 0;
}