#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;

    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    void preorder(Node *node, vector<int> &ans)
    {
        if (node == NULL)
        {
            return;
        }
        ans.push_back(node->data);
        preorder(node->left, ans);
        preorder(node->right, ans);
    }

    vector<int> preOrder(Node *root)
    {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};