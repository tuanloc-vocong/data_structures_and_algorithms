// Title: Under Average Grades
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic:

/**
 * Cho danh sách liên kết các điểm dưới dạng số thực. Hãy in ra danh sách các điểm dưới trung bình (điểm dưới 5.0).
 * 
 * Input:
 * Mỗi điểm trong danh sách là một số thực n(0≤n≤10) nằm trên 1 hàng. Input sẽ kết thúc ở dòng có số -1
 * (Số -1 sẽ không được tính vào danh sách liên kết).
 * 
 * Dữ liệu đã cho đảm bảo danh sách có ít nhất 1 phần tử.
 * 
 * Output:
 * In ra danh sách các điểm số từ dưới trung bình, mỗi số trên 1 hàng.
 * 
 * Example 1:
 * Input:
 * 2.5
 * 3 
 * 5.2
 * 0 
 * -1
 * 
 * Output:
 * 2.5
 * 3
 * 0
 **/

#include <iostream>

using namespace std;

struct Node {
    double data;
    Node* next;
};

struct List {
    Node* head;
};

void init(List& lst) {
    lst.head = NULL;
}

Node* createNode(double x) {
    Node* p = new Node;
    if (p == NULL)
        return NULL;
    p->data = x;
    p->next = NULL;
    return p;
}

void removeHead(List& lst) {
    if (lst.head == NULL)
        return;
    Node* cur = lst.head;
    lst.head = lst.head->next;
    delete cur;
}

void clear(List& lst) {
    while (lst.head != NULL)
        removeHead(lst);
}

void inputList(List& lst) {
    init(lst);
    double x;
    cin >> x;
    Node* cur = NULL;
    Node* p = NULL;
    while (x != -1) {
        p = createNode(x);
        if (p != NULL) {
            if (lst.head == NULL) {
                lst.head = p;
                cur = lst.head;
            } else {
                cur->next = p;
                cur = p;
            }
        }
        cin >> x;
    }
}

void outputBelow5(List& lst) {
    Node* cur = lst.head;
    while (cur) {
        if (cur->data < 5.0) {
            cout << cur->data << endl;
        }
        cur = cur->next;
    }
}

int main() {
    List lst;
    inputList(lst);
    outputBelow5(lst);
    return 0;
}