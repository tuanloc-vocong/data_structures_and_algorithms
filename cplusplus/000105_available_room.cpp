// Title: Available Room
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Cho danh sách các phòng khách sạn gồm các thông tin {Mã phòng, Giá thuê, Tình trạng phòng: 0 - trống, 1 - đã được thuê}.
 * Hãy liệt kê các phòng trống.
 * 
 * Input:
 * Dòng đầu tiên là 1 số nguyên dương N là số lượng phòng trong khách sạn (1≤N≤10^​3).
 * 
 * N dòng tiếp theo, mỗi dòng gồm bộ 3 thông tin:
 * Mã phòng: là một dãy số có 7 chữ số.
 * Đơn giá thuê: là một số nguyên không âm không quá 10^6.
 * Tình trạng phòng: 0 hoặc 1 tương ứng với trống và không trống.
 * 
 * Output:
 * In ra danh sách các phòng trống theo thứ tự của dữ liệu vào.
 * Mỗi dòng in thông tin của một phòng gồm mã phòng và đơn giá thuê cách nhau bởi khoảng trắng.
 * 
 * Example 1:
 * Input:
 * 5
 * 000885 750 0
 * 000195 175 0
 * 000958 550 1
 * 000187 450 0
 * 001110 550 1
 * 
 * Output:
 * 000885 750
 * 000195 175
 * 000187 450
 **/

#include<iostream>
#include<math.h>
using namespace std;

struct Room{
    string id;
    int price;
    int booked;
};

struct Node{
    Room data;
    Node* next;
};

struct List{
    Node* head;
};

void init(List &lst){
    lst.head = NULL;
}

Node* createNode(Room x){
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

void showEmptyRooms(List lst){
    if(lst.head == NULL)
        return;
    Node *cur = lst.head;
    while(cur != NULL) {
        if(cur->data.booked == 0)
            cout << cur->data.id << " " << cur->data.price << endl;
        cur = cur->next;
    }
}

int main(){
    List lst;
    init(lst);
    Node *cur = NULL;
    Node *p = NULL;
    Room r;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> r.id >> r.price >> r.booked;
        p = createNode(r);
        if (lst.head == NULL) {
            lst.head = p;
            cur = p;
        } else {
            cur->next = p;
            cur = p;
        }
    }

    showEmptyRooms(lst);

    clear(lst);

}