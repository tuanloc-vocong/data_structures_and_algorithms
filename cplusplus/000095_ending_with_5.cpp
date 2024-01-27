// Title: Ending With 5
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

/**
 * Cho danh sách liên kết đơn các số nguyên.
 * Hãy xóa những phần tử trong danh sách có tận cùng là 5 và in ra danh sách sau khi đã xóa.
 *
 * Input:
 * Dòng thứ nhất gồm 1 số nguyên dương n là số lượng phần tử có trong danh sách được cho (1≤n≤10^​5).
 * N dòng tiếp theo, mỗi dòng là một số nguyên có giá trị tuyệt đối không quá 10^6.
 *
 * Output:
 * In ra danh sách sau khi đã xóa các phần tử có tận cùng là 5. Các phần tử trong danh sách cách nhau bởi khoảng trắng.
 *
 * Example 1:
 * Input:
 * 4
 * 15
 * 6
 * 256
 * 255
 *
 * Output:
 * 6 256
 **/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

bool last5(int n)
{
    if (n < 0)
        n = -n;
    return n % 10 == 5;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        Node *newNode = new Node(value);
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

    if (head == nullptr)
    {
        return 0;
    }

    while (last5(head->data))
    {
        Node *temp = head;
        head = head->next;
        delete temp;

        if (head == nullptr)
        {
            break;
        }
    }

    if (head == nullptr)
    {
        return 0;
    }

    Node *current = head;
    while (current->next != nullptr)
    {
        if (last5(current->next->data))
        {
            Node *temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        else
        {
            current = current->next;
        }
    }

    current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }

    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}