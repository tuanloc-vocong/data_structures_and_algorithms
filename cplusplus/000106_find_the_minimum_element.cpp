// Title: Find The Minimum Element
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(n)
// Topic: Trees

/**
 * Cho N số, bạn hãy xây dựng cây nhị phân tìm kiếm từ N số đó. Sau đó hãy tìm phần tử nhỏ nhất trong cây nhị phân.
 *
 * Input:
 * Dòng đầu tiên là số lượng phần tử N (0≤N≤10^3).
 * Dòng thứ hai gồm N số nguyên có giá trị tuyệt đối không quá 10^6.
 * Dữ liệu đảm bảo giá trị của các phần tử là khác nhau.
 *
 * Output:
 * In ra giá trị của phần tử nhỏ nhất.
 *
 * Example 1:
 * Input:
 * 5
 * 6 3 2 1 4
 *
 * Output:
 * 1
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

int getMin(Node *root)
{
    if (root->left == NULL)
    {
        return root->data;
    }
    return getMin(root->left);
}

int main()
{
    Node *root;
    root = NULL;
    int n;
    int arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        insert(root, arr[i]);
    }

    cout << getMin(root);
    return 0;
}