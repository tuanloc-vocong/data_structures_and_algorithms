// Title: The Minimum Element
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic:

/**
 * Cho danh sách liên kết đơn các số nguyên. Tìm số nhỏ nhất trong danh sách đã cho.
 * 
 * Input:
 * Gồm nhiều dòng, mỗi dòng là số nguyên dương có giá trị không quá 10^​6.
 * Kết thúc danh sách là số 0 (số 0 không được tính trong danh sách).
 * Dữ liệu đã cho đảm bảo danh sách có ít nhất 1 phần tử. Số lượng các phần tử không quá 10^5.
 * 
 * Output:
 * Một dòng duy nhất là số nhỏ nhất trong danh sách.
 * 
 * Example 1:
 * Input:
 * 2
 * 3
 * 0
 * 
 * Output:
 * 2
 **/

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct List{
    Node* head;
};

void init(List &lst){
    lst.head = NULL;
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

void inputList(List &lst){
    init(lst);
    int x;
    cin>>x;
    Node *cur = NULL;
    Node *p = NULL;
    while(x != 0){
        p = createNode(x);
        if(p != NULL){
            if(lst.head == NULL){
                lst.head = p;
                cur = lst.head;
            }
            else{
                cur->next = p;
                cur = p;
            }
        }
        cin >> x;
    }
}

Node* min(List lst){
    if(lst.head == NULL)
        return 0;
    Node* ans = lst.head;
    Node* cur = lst.head;
    while(cur != NULL){
        if(cur < ans)
            ans = cur;
        cur = cur->next;
    }
    return ans;
}

int main(){
    List lst;
    inputList(lst);
    Node* ans = min(lst);
    cout << ans->data;
	system("pause");
    return 0;
}