// Title: Palindrome Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

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

bool palindrome(int x){
    x = fabs(x);
    int reverse = 0;
    int t = x;
    while(t > 0){
        reverse = reverse * 10 + t % 10;
        t = t / 10;
    }
    if(x == reverse)
        return true;
    return false;

}

void showPalindrome(List lst){
    if(lst.head == NULL)
        return;

    Node *cur = lst.head;
    int index = 0;
    while(cur != NULL){
        if(palindrome(cur->data))
            cout << index << " ";
        index++;
        cur = cur->next;
    }
}

int main(){
    List lst;
    init(lst);

    int x;
    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        insertTail(lst, x);
    }

    showPalindrome(lst);

    clear(lst);

}
