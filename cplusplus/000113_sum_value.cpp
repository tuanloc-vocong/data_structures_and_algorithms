// Title: Sum Value
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Trees

/**
 * Cho N số và một số X, bạn hãy tạo thành cây nhị phân tìm kiếm từ N số đó và tính tổng các số nút có giá trị nhỏ hơn giá trị X.
 *
 * Input:
 * Dòng đầu tiên là số lượng phần tử N và X (0≤N≤10^3,0≤X≤10^6).
 * Dòng thứ hai gồm N số nguyên dương là giá trị các phần tử.
 * Các giá trị phần tử là các số nguyên dương không vượt quá 10^6​.
 * Lưu ý: các giá trị xuất hiện nhiều hơn một lần chỉ tính là một lần.
 *
 * Output:
 * In ra tổng các nút có giá trị nhỏ hơn X.
 *
 * Example 1:
 * Input:
 * 6 6
 * 5 1 2 7 6 8
 *
 * Output:
 * 8
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

int sumSmallerThan(Node *root, int X)
{
    if (root == NULL)
        return 0;
    int sum = sumSmallerThan(root->left, X) + sumSmallerThan(root->right, X);

    if (root->data < X)
    {
        sum += root->data;
    }
    return sum;
}

int main()
{
    Node *root = NULL;
    int n, X, arr[1000];
    cin >> n >> X;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        insert(root, arr[i]);
    }

    cout << sumSmallerThan(root, X);
    erase(root);
    return 0;
}