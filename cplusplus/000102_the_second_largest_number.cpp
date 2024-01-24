// Title: The Second Largest Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic:

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

#include<iostream>
using namespace std;

struct Node{
    float data;
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

Node* createNode(float x){
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

void insertTail(List &lst, float x) {
    Node* p = createNode(x);
    if (lst.head == NULL) {
        lst.head = lst.tail = p;
    } else {
        lst.tail->next = p;
        lst.tail = p;
    }
}

void inputList(List &lst){
    init(lst);
    float x;
    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        insertTail(lst, x);
    }
}

float secondMax(List lst) {
    if (lst.head == NULL) return NULL;

    float max1 = lst.head->data;
    float max2 = -1;

    Node * cur = lst.head->next;
    while (cur != NULL) {
        if (cur->data > max1) {
            max2 = max1;
            max1 = cur->data;
        } else if (cur->data < max1 and cur->data > max2) {
            max2 = cur->data;
        }
        cur = cur->next;
    }
    return max2;
}

int main(){
    List lst;
    inputList(lst);
    cout << secondMax(lst);
    return 0;
}