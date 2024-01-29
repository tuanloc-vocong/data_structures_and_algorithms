// Title: Palindrome Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

/**
 * Cho danh sách liên kết đơn các số nguyên. Tìm thứ tự của những node chứa số đối xứng.
 * Số đối xứng là số khi đọc từ trái qua phải bằng với số khi đọc từ phải qua trái. Số 6, 66, 161
 * là các số đối xứng, 123 không phải là số đối xứng.
 *
 * Input:
 * Gồm nhiều dòng, mỗi dòng một số nguyên không âm có giá trị không vượt quá 10^6.
 * Kết thúc danh sách là một dòng chứa số −1 (số −1 không xuất hiện trong danh sách liên kết).
 * Lưu ý: Các node được đánh số từ 0 đến N−1.
 * Dữ liệu đảm bảo danh sách liên kết không có nhiều hơn 10^5 phần tử.
 *
 * Output:
 * In ra thứ tự của những node chứa số đối xứng cách nhau bởi khoảng trắng.
 *
 * Example 1:
 * Input:
 * 2
 * 56
 * 121
 * 34
 * 0
 * -1
 *
 * Output:
 * 0 2 4
 **/

#include <iostream>
#include <math.h>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

struct List
{
    Node *head;
    Node *tail;
};

bool palindrome(int x)
{
    x = fabs(x);
    int reverse = 0;
    int t = x;

    while (t > 0)
    {
        reverse = reverse * 10 + t % 10;
        t = t / 10;
    }

    if (x == reverse)
        return true;
    return false;
}

int main()
{
    List list;
    list.head = nullptr;
    list.tail = nullptr;
    int x;

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

    if (list.head == nullptr)
    {
        return 0;
    }

    Node *current = list.head;
    int index = 0;

    while (current != nullptr)
    {
        if (palindrome(current->data))
        {
            cout << index << " ";
        }
        index++;
        current = current->next;
    }

    if (list.head == nullptr)
    {
        return 0;
    }

    while (current != nullptr)
    {
        Node *temp = list.head;
        list.head = list.head->next;
        delete temp;
    }

    return 0;
}
