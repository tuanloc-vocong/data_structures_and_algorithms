// Title: Queries
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

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

#include<iostream>
#include<math.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

struct List{
    Node* head;
    Node* tail;
};

void init(List &lst){
    lst.head = NULL;
    lst.tail = NULL;
}

Node* createNode(int x){
    Node *p = new Node;
    if(p == NULL)
        return NULL;
    p->data = x;
    p->next = NULL;
    return p;
}

void insertTail(List &lst, int x) {
  Node* p = createNode(x);
  if (lst.head == NULL) {
    lst.head = lst.tail = p;
  } else {
    lst.tail->next = p;
    lst.tail = p;
  }
}

void removeHead(List &lst){
    if(lst.head == NULL)
        return;
    Node *cur = lst.head;
    lst.head = lst.head->next;
    delete cur;
}

void printList(List lst) {
    Node * cur = lst.head;
    while (cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }
}

void clear(List &lst){
    while(lst.head != NULL)
        removeHead(lst);
}

int main(){
    List lst;
    init(lst);

    int n, query, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> query;
      if (query == 0) {
        removeHead(lst);
      } else {
        cin >> x;
        insertTail(lst, x);
      }
    }

    printList(lst);

    clear(lst);

}