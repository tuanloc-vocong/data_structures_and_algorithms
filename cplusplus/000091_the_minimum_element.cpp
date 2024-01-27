// Title: The Minimum Element
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

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

#include <iostream>
#include <climits>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

int findMin(Node* head){
    int minValue = INT_MAX;
    while(head != nullptr){
        if(head->data < minValue){
            minValue = head->data;
        }
        head = head->next;
    }
    return minValue;
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

    int minValue = findMin(head);
    cout << minValue;

    while(head != nullptr){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}