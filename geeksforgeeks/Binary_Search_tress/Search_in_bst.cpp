#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    bool search(Node *root, int key)
    {
        if (root == NULL)
        {
            return false;
        }
        if (root->data == key)
            return true;
        if (root->data > key)
        {
            return search(root->left, key);
        }
        if (root->data < key)
        {
            return search(root->right, key);
        }
        return false;
    }
};