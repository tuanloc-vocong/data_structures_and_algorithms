// Title: Under Average Grades
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Singly Linked List

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

    Node(double value) : data(value), next(nullptr) {}
};

void outputBelow5(Node* head){
    while(head != nullptr){
        if(head->data < 5.0){
            cout << head->data << "\n";
        }
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    double value;

    while(true){
        cin >> value;
        if(value == -1){
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

    outputBelow5(head);

    while(head != nullptr){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}