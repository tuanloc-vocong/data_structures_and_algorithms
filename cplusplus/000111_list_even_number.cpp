// Title: List Even Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Trees

/**
 * Cho N số, bạn hãy xây dựng cây nhị phân tìm kiếm từ các phần tử đó.
 * Liệt kê các số chẵn trong cây nhị phân tìm kiếm theo cách duyệt Postorder Traversal.
 *
 * Input:
 * Dòng đầu tiên là số lượng phần tử N (0≤N≤10^3).
 * Dòng thứ hai gồm N số nguyên có giá trị tuyệt đối không quá 10^6.
 *
 * Output:
 * In ra một dãy các số là số chẵn trong cây nhị phân tìm kiếm theo cách duyệt Postorder Traversal.
 *
 * Example 1:
 * Input:
 * 6
 * 5 1 2 7 6 8
 *
 * Output:
 * 2 6 8
 *
 * Example 2:
 * Input:
 * 1
 * 2
 *
 * Output:
 * 2
 **/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

void insert(Node *&root, int value)
{
    if (root == NULL)
    {
        Node *res = new Node;
        res->data = value;
        res->left = NULL;
        res->right = NULL;
        root = res;
        return;
    }

    if (value < root->data)
    {
        insert(root->left, value);
    }
    else
    {
        insert(root->right, value);
    }
}

void erase(Node *root)
{
    if (root->left != NULL)
    {
        erase(root->left);
    }

    if (root->right != NULL)
    {
        erase(root->right);
    }
    delete root;
}

void outputEven(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    outputEven(root->left);
    outputEven(root->right);

    if (root->data % 2 == 0)
    {
        cout << root->data << " ";
    }
}

int main()
{
    Node *root = NULL;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        insert(root, x);
    }

    outputEven(root);
    erase(root);
    return 0;
}