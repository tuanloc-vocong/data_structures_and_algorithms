// Title: Prime Numbers In Linked List
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n√​x​)
// Space Complexity:
// Topic:

/**
 * Cho lần lượt các số nguyên dương, hãy tạo danh sách liên kết đơn từ các số đó và đếm xem có bao nhiêu số nguyên tố
 * trong danh sách liên kết đơn mới tạo.
 * 
 * Input:
 * Gồm nhiều dòng, mỗi dòng là một số nguyên x dương (x≤106).
 * Kết thúc bộ dữ liệu là một dòng chứa số -1.
 * Dữ liệu sẽ có tối đa 10^5 dòng.
 * 
 * Output:
 * In ra số lượng số nguyên tố trong danh sách liên kết đơn đã tạo.
 * 
 * Example 1:
 * Input:
 * 5
 * 6
 * 2
 * 3
 * 1
 * -1
 * 
 * Output:
 * 3
 **/

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

struct List {
    Node* head;
};

void init(List& lst) {
    lst.head = NULL;
}

Node* createNode(int x) {
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

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void clear(List& lst) {
    while (lst.head != NULL)
        removeHead(lst);
}

void inputList(List& lst) {
    init(lst);
    int x;
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

int primeSize(List& lst) {
    int ret = 0;
    Node* cur = lst.head;
    while (cur) {
        if (isPrime(cur->data))
            ret++;
        cur = cur->next;
    }
    return ret;
}

int main() {
    List lst;
    inputList(lst);
    cout << primeSize(lst);
    return 0;
}
