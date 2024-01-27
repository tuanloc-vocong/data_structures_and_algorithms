// Title: Queries
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

/**
 * Ban đầu bạn có một danh sách liên kết rỗng, bạn phải thực hiện N​ thao tác.
 * Xóa phần tử ở đầu, nếu danh sách liên kết đang rỗng thì không làm gì.
 * Thêm node có giá trị x​ và cuối danh sách liên kết.
 * Và cuối cùng là in danh sách liên kết sau cùng.
 *
 * Input:
 * Dòng thứ nhất gồm 1 số nguyên dương n​ là số lượng truy vấn (1 \leq n \leq 10^3)​.
 * n​ dòng tiếp theo mỗi dòng gồm là thông tin của một truy vấn có dạng:
 * ​0​: xóa phần tử ở đầu.
 * 1 x: thêm node có giá trị x vào cuối danh sách liên kết.
 *
 * Output:
 * In ra danh sách liên kết cuối cùng trên một dòng.
 *
 * Example 1:
 * Input:
 * 5
 * 1 2
 * 1 3
 * 1 1
 * 0
 * 1 2
 *
 * Output:
 * 3 1 2
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

void insertTail(List &list, int value)
{
  Node *newNode = new Node(value);
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

void removeHead(List &list)
{
  if (list.head == nullptr)
  {
    return;
  }
  Node *current = list.head;
  list.head = list.head->next;
  delete current;
}

int main()
{
  List list;
  list.head = nullptr;
  list.tail = nullptr;
  int n, query, value;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> query;
    if (query == 0)
    {
      removeHead(list);
    }
    else
    {
      cin >> value;
      insertTail(list, value);
    }
  }

  Node *current = list.head;
  while (current != nullptr)
  {
    cout << current->data << " ";
    current = current->next;
  }

  while (list.head != nullptr)
  {
    removeHead(list);
  }

  return 0;
}