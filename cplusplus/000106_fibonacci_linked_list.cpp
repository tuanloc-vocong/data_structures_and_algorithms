// Title: Fibonacci Linked List
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic:

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

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct List{
    Node* head, *tail;
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

void removeHead(List &lst){
    if(lst.head == NULL)
        return;
    Node *cur = lst.head;
    lst.head = lst.head->next;
    delete cur;
}

void clear(List &lst){
    while(lst.head != NULL)
        removeHead(lst);
}

void insertTail(List &lst, int data){
    if(lst.head == NULL){
        lst.head = lst.tail = createNode(data);
    }
    else{
        lst.tail->next = createNode(data);
        lst.tail = lst.tail->next;
    }
}

void printList(List& lst){
    Node* cur = lst.head;
    while(cur != NULL){
        cout << cur->data << " ";
        cur = cur->next;
    }
}

int main(){
    List lst;
    init(lst);
    int x, y, n, temp;
    cin >> x >> y >> n;
    insertTail(lst, x);
    insertTail(lst, y);

    for(int i = 0; i < n - 2; ++i){
        temp = (x + y)%1000007;
        insertTail(lst, temp);
        x = y;
        y = temp;
    }
    printList(lst);
    return 0;
}
