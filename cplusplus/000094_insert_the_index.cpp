// Title: Insert The Index
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

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

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertOrderNum(Node* head) {
    Node* newNode = new Node(1);
    Node* current = head;
    newNode->next = head;
    head = newNode;

    int i = 2;
    while (current->next != nullptr) {
        Node* newNode = new Node(i);
        newNode->next = current->next;
        current->next = newNode;
        current = newNode->next;
        i++;
    }
    return head;
}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    int value;

    while(true){
        cin >> value;
        if(value == 0){
            break;
        }

        Node* newNode = new Node(value);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    head = insertOrderNum(head);
    print(head);
    return 0;
}