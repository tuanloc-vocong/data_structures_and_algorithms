// Title: Find Student With The Highest Score
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Trees

/**
 * Cho cấu trúc sinh viên gồm {MSSV, Tên, Điểm}. Tạo một cây nhị phân tìm kiếm lưu cấu trúc sinh viên trên. Tìm sinh viên
 * có điểm cao nhất trong danh sách N sinh viên cho sẵn.
 * Đảm bảo không có hai sinh viên nào có cùng một số điểm.
 *
 * Input:
 * Dòng đầu tiên là số lượng sinh viên N (0≤N≤10^3).
 *
 * N dòng tiếp theo, mỗi dòng gồm hai thông tin:
 * Mã số sinh viên: là một dãy số có 6 chữ số.
 * Tên: là một chuỗi có độ dài không quá 50 kí tự.
 * Điểm: là một số thực nằm trong đoạn [0, 100].
 *
 * Output:
 * In ra sinh viên có điểm cao nhất với các thông tin lần lượt là mã số sinh viên, tên, điểm. Các thông tin
 * cách nhau bởi một dấu khoảng trắng.
 *
 * Example 1:
 * Input:
 * 4
 * 016960 Taylor 7.6
 * 001523 Kanye 8.0
 * 420145 Kim 8.6
 * 016236 Katy 9.5
 *
 * Output:
 * 016236 Katy 9.5
 **/

#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string id, name;
    float mark;
};

struct Node
{
    Student student;
    Node *left, *right;
};

bool compare(Student a, Student b)
{
    return a.mark < b.mark;
}

void insert(Node *&root, Student student)
{
    if (root == NULL)
    {
        Node *res = new Node;
        res->student = student;
        res->left = NULL;
        res->right = NULL;
        root = res;
        return;
    }

    if (compare(student, root->student))
    {
        insert(root->left, student);
    }
    else
    {
        insert(root->right, student);
    }
}

int main()
{
    cout << "Hello, World!!!";
    return 0;
}