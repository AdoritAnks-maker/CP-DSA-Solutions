#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int inOrderSuccessor(Node *root, Node *x)
    {
        int val = x->data;
        int ans = -1;
        if (root == NULL)
        {
            return NULL;
        }
        while (root)
        {
            if (val < root->data)
            {
                ans = root->data;
                root = root->left;
            }
            else
            {
                root = root->right;
            }
        }
        return ans;
    }
};