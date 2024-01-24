// Title: Ending With 5
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic:

/**
 * Cho danh sách liên kết đơn các số nguyên.
 * Hãy xóa những phần tử trong danh sách có tận cùng là 5 và in ra danh sách sau khi đã xóa.
 * 
 * Input:
 * Dòng thứ nhất gồm 1 số nguyên dương n là số lượng phần tử có trong danh sách được cho (1≤n≤10^​5).
 * N dòng tiếp theo, mỗi dòng là một số nguyên có giá trị tuyệt đối không quá 10^6.
 * 
 * Output:
 * In ra danh sách sau khi đã xóa các phần tử có tận cùng là 5. Các phần tử trong danh sách cách nhau bởi khoảng trắng.
 * 
 * Example 1:
 * Input:
 * 4
 * 15
 * 6
 * 256
 * 255
 * 
 * Output:
 * 6 256 
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

bool last5(int x) {
    if (x<0) x = -x;
    return x%10 == 5;
}

int main(){
    List lst;
    init(lst);
    Node *cur = NULL;
    Node *p = NULL;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p = createNode(x);
        if (lst.head == NULL) {
            lst.head = p;
            cur = lst.head;
        } else {
            cur->next = p;
            cur = p;
        }
    }
    
    if(lst.head == NULL)
        return 0;
    
    while(last5(lst.head->data)){
        p = lst.head;
        lst.head = lst.head->next;
        delete p;
        if(lst.head == NULL)
            break;
    }
    
    if(lst.head == NULL)
        return 0;
    
    cur = lst.head;
    while (cur->next != NULL) {
        if (last5(cur->next->data)) {
            p = cur->next;
            cur->next = p->next;
            delete p;
        }
        else
            cur = cur->next;
    }
    
    
    cur = lst.head;
    while (cur!=NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    
    clear(lst);
    
}