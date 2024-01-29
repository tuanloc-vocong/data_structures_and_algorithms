// Title: Sum Of Leaf Nodes On The Tree
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Trees

/**
 * Cho N số, bạn hãy tạo thành cây nhị phân tìm kiếm và tính tổng giá trị của các nút lá của cây.
 *
 * Input:
 * Dòng đầu tiên là số lượng phần tử N (0≤N≤10^3).
 * Dòng thứ hai gồm N số nguyên dương là giá trị các phần tử.
 * Các giá trị phần tử là các số nguyên dương không vượt quá 10^{6].
 *
 * Output:
 * In ra tổng giá trị của các nút lá cây.
 *
 * Example 1:
 * Input:
 * 6
 * 5 1 2 7 6 8
 *
 * Output:
 * 16
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

int sum(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return root->data;
    }

    int S1 = 0, S2 = 0;
    if (root->left != NULL)
    {
        S1 = sum(root->left);
    }

    if (root->right != NULL)
    {
        S2 = sum(root->right);
    }
    return S1 + S2;
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

    cout << sum(root);
    erase(root);
    return 0;
}