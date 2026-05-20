#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
public:
    int findCeil(Node *root, int x)
    {
        if (root == NULL)
        {
            return NULL;
        }
        int ans = -1;
        while (root != NULL)
        {
            if (root->data == x)
            {
                return root->data;
            }
            if (root->data < x)
            {
                root = root->right;
            }
            else
            {
                ans = root->data;
                root = root->left;
            }
        }
        return ans;
    }
};
