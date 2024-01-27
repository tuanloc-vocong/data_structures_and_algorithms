// Title: The Second Largest Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity:
// Topic: Singly Linked List

/**
 * Cho danh sách liên kết đơn các số thực. Tìm số lớn nhì trong danh sách đã cho. Số lớn nhì là số nhỏ hơn số lớn nhất.
 *
 * Input:
 * Gồm nhiều dòng, mỗi dòng chứa một số thực không âm nhỏ hơn hoặc bằng 10^6.
 * Kết thúc danh sách là số −1 (số −1 không được tính trong danh sách).
 * Dữ liệu đã cho đảm bảo danh sách có ít nhất 1 phần tử. Số lượng các phần tử không quá 10^​5 và số −1 chỉ xuất hiện
 * duy nhất một lần ở cuối dòng.
 *
 * Output:
 * In ra số lớn nhì trong danh sách. Nếu không tìm được số lớn nhì thì in ra −1.
 *
 * Example 1:
 * Input:
 * 1.1
 * 2.2
 * 3.3
 * -1
 *
 * Output:
 * 2.2
 **/

#include <iostream>
using namespace std;

struct Node
{
    float data;
    Node *next;
};

struct List
{
    Node *head;
    Node *tail;
};

float secondMax(List lst)
{
}

int main()
{
    List lst;
    inputList(lst);
    cout << secondMax(lst);
    return 0;
}