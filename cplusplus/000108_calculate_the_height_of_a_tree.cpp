// Title: Calculate The Height Of A Tree
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Trees

/**
 * Cho N số, bạn hãy xây dựng cây nhị phân tìm kiếm từ N số đó. Sau đó hãy tính độ cao của cây vừa tạo.
 *
 * Input:
 * Dòng đầu tiên là số lượng phần tử N(0≤N≤10^3).
 * Dòng thứ hai gồm N số nguyên dương là giá trị các phần tử.
 * Các giá trị phần tử là các số nguyên dương không vượt quá 10^6.
 * Dữ liệu đảm bảo giá trị của các phần tử là khác nhau.
 *
 * Output:
 * In ra độ cao của cây nhị phân tìm kiếm vừa tạo bởi N số.
 *
 * Example 1:
 * Input:
 * 5
 * 10 25 78 32 40
 *
 * Output:
 * 5
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

int height(Node *root)
{
    int hl = 0, hr = 0;
    if (root->left != NULL)
    {
        hl = height(root->left);
    }

    if (root->right != NULL)
    {
        hr = height(root->right);
    }
    return 1 + max(hl, hr);
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

    cout << height(root);
    erase(root);
    return 0;
}