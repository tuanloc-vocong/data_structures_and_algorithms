// Title: Prime Numbers In Linked List
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n√​x​)
// Space Complexity: O(n)
// Topic: Singly Linked List

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
#include <math.h>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

bool isPrime(int n){
    if(n < 2){
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int countPrime(Node* head) {
    int cnt = 0; 
    while (head != nullptr) {
        if (isPrime(head->data))
            cnt++;
        head = head->next;
    }
    return cnt;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int value;

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

    cout << countPrime(head);
    return 0;
}
