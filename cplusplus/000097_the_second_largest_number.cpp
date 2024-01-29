// Title: The Second Largest Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

/**
 * Cho danh sách liên kết đơn các số thực. Tìm số lớn nhì trong danh sách đã cho. Số lớn nhì là số nhỏ hơn số lớn nhất.
 *
 * Input:
 * Gồm nhiều dòng, mỗi dòng chứa một số thực không âm nhỏ hơn hoặc bằng 10^6.
 * Kết thúc danh sách là số −1 (số −1 không được tính trong danh sách).
 * Dữ liệu đã cho đảm bảo danh sách có ít nhất 1 phần tử. Số lượng các phần tử không quá 10^​5 và số −1 chỉ xuất hiện
 * duy nhất một lần ở cuối dòng.
 *
 * Output:
 * In ra số lớn nhì trong danh sách. Nếu không tìm được số lớn nhì thì in ra −1.
 *
 * Example 1:
 * Input:
 * 1.1
 * 2.2
 * 3.3
 * -1
 *
 * Output:
 * 2.2
 **/

#include <iostream>

using namespace std;

struct Node
{
    float data;
    Node *next;

    Node(float value) : data(value), next(nullptr) {}
};

struct List
{
    Node *head;
    Node *tail;
};

float secondMax(List &list)
{
    if (list.head == nullptr)
        return -1;

    float max1 = list.head->data;
    float max2 = -1;

    Node *current = list.head->next;
    while (current != nullptr)
    {
        if (current->data > max1)
        {
            max2 = max1;
            max1 = current->data;
        }
        else if (current->data < max1 && current->data > max2)
        {
            max2 = current->data;
        }
        current = current->next;
    }
    return max2;
}

int main()
{
    List list;
    list.head = nullptr;
    list.tail = nullptr;
    float x;

    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }

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

    cout << secondMax(list);
    return 0;
}