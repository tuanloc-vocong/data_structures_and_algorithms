// Title: Count The Number Of Nodes With Exactly 2 Children
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Trees

/**
 * Cho N số, bạn hãy tạo thành cây nhị phân tìm kiếm và đếm số nút có đúng 2 con.
 *
 * Input:
 * Dòng đầu tiên là số lượng phần tử N (0≤N≤10^3).
 * Dòng thứ hai gồm N số nguyên dương là giá trị các phần tử.
 * Các giá trị phần tử là các số nguyên dương không vượt quá 10^{6].
 *
 * Output:
 * In ra số lượng nút có đúng hai con.
 *
 * Example 1:
 * Input:
 * 6
 * 5 1 2 7 6 8
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

int countFull(Node *root)
{
    if (root == NULL)
        return 0;

    int cnt = 0;
    if (root->left != NULL && root->right != NULL)
    {
        cnt = 1;
    }
    return cnt + countFull(root->left) + countFull(root->right);
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

    cout << countFull(root);
    erase(root);
    return 0;
}