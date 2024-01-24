// Title: Insert The Index
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic:

/**
 * Cho danh sách liên kết đơn các số nguyên. Chèn trước mỗi phần tử số thứ tự của nó trong danh sách ban đầu.
 * Cho rằng số thứ tự bắt đầu bằng 1.
 * 
 * In ra danh sách sau khi đã chèn.
 * 
 * Input:
 * Gồm nhiều dòng, mỗi dòng chứa một số nguyên có giá trị tuyệt đối không quá 10^6.
 * 
 * Kết thúc danh sách là số 0 (số 0 không được tính trong danh sách).
 * 
 * Dữ liệu đã cho đảm bảo danh sách có ít nhất 1 phần tử. Số lượng các phần tử không quá 10^5 và số 0
 * chỉ xuất hiện duy nhất một lần ở cuối dòng.
 * 
 * Output:
 * Một dòng duy nhất là danh sách sau khi đã chèn số thứ tự (không có số 0 ở cuối), các phần tử trong danh sách
 * cách nhau bởi khoảng trắng.
 * 
 * Example 1:
 * Input:
 * 3
 * 9
 * -5
 * 0
 * 
 * Output:
 * 1 3 2 9 3 -5
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

void print(List lst) {
    Node * cur = lst.head;
    while (cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }
}

void insertOrderNum(List &lst) {
    if (lst.head == NULL) return;

    Node * p = createNode(1);
    p->next = lst.head;
    lst.head = p;

    int i = 2;
    Node * cur = lst.head->next;

    while (cur->next != NULL) {
        p = createNode(i);
        p->next = cur->next;
        cur->next = p;
        cur = p->next;
        i++;
    }
}

int main(){
    List lst;
    inputList(lst);
    insertOrderNum(lst);
    print(lst);
    return 0;
}