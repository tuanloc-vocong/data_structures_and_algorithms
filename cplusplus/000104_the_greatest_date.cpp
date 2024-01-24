// Title: The Greatest Date
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Cho danh sách liên kết đơn các ngày gồm 3 thông tin {ngày, tháng, năm}. Tìm ngày lớn nhất trong danh sách
 * đã cho. Ghi chú: ngày lớn nhất là ngày có khoảng cách lớn nhất với ngày 1/1/1
 * 
 * Input:
 * Dòng thứ nhất gồm 1 số nguyên dương N là số lượng phần tử (1≤N≤10^​5).
 * N dòng tiếp theo, mỗi dòng gồm 1 bộ 3 số nguyên lần lượt là ngày, tháng và năm của ngày tương ứng.
 * Dữ liệu đảm bảo ngày / tháng / năm hợp lệ.
 * 
 * Output:
 * Một dòng duy nhất gồm ba số nguyên là ngày, tháng và năm của ngày mới nhất trong danh sách, cách nhau bởi khoảng trắng.
 * 
 * Example 1:
 * Input:
 * 3
 * 31 1 2017
 * 1 12 2017
 * 5 9 2017
 * 
 * Output:
 * 1 12 2017
 **/

#include<iostream>
#include<math.h>
using namespace std;

struct Date{
    int day, month, year;
};

struct Node{
    Date data;
    Node* next;
};

struct List{
    Node* head;
};

void init(List &lst){
    lst.head = NULL;
}

Node* createNode(Date x){
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

int compare(Date d1, Date d2){
    if(d1.year < d2.year)
        return -1;
    if(d1.year > d2.year)
        return 1;
    if(d1.month < d2.month)
        return -1;
    if(d1.month > d2.month)
        return 1;
    if(d1.day < d2.day)
        return -1;
    if(d1.day > d2.day)
        return 1;
    return 0;
}

Node* max(List lst){
    if(lst.head == NULL)
        return NULL;
    
    Node *cur = lst.head;
    Node *max = lst.head;
    while(cur != NULL){
        if(compare(cur->data, max->data) == 1)
            max = cur;
        cur = cur->next;
    }
    return max;
}

int main(){
    List lst;
    init(lst);
    Node *cur = NULL;
    Node *p = NULL;
    Date d;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d.day >> d.month >> d.year;
        p = createNode(d);
        if (lst.head == NULL) {
            lst.head = p;
            cur = lst.head;
        } else {
            cur->next = p;
            cur = p;
        }
    }
    
    Node *ans = max(lst);
    if(ans != NULL)
        cout << ans->data.day << " " << ans->data.month
        << " " << ans->data.year;
    
    clear(lst);
    
}