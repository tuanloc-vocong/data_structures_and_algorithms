// Title: Print Incrementally
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Trees

/**
 * Cho N phần tử, hãy xây dựng cây nhị phân tìm kiếm với N rồi in giá trị các nút trong cây đó ra theo chiều tăng dần.
 *
 * Input:
 * Dòng đầu tiên là số lượng phần tử N (0≤N≤10^3).
 * Dòng thứ hai gồm N số nguyên dương là giá trị các phần tử.
 * Các giá trị phần tử là các số nguyên dương không vượt quá 10^6​.
 * Dữ liệu đảm bảo giá trị của các phần tử là khác nhau.
 *
 * Output:
 * In theo chiều tăng dần của các giá trị, các số cách nhau bởi một khoảng trắng.
 *
 * Example 1:
 * Input:
 * 5
 * 10 25 78 32 40
 *
 * Output:
 * 10 25 32 40 78
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
        Node *res;
        res = new Node;
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

void printPath(Node *root)
{
    if (root->left != NULL)
    {
        printPath(root->left);
    }
    cout << root->data << ' ';

    if (root->right != NULL)
    {
        printPath(root->right);
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

int main()
{
    Node *root;
    root = NULL;
    int n, arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        insert(root, arr[i]);
    }

    printPath(root);
    erase(root);
    return 0;
}