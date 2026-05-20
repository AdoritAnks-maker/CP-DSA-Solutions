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
    bool isLeaf(Node *node)
    {
        return (node->left == NULL && node->right == NULL);
    }

    void addleftboundary(Node *root, vector<int> &res)
    {
        Node *curr = root->left;
        while (curr)
        {
            if (!isLeaf(curr))
                res.push_back(curr->data);
            if (curr->left)
                curr = curr->left;
            else
                curr = curr->right;
        }
    }

    void addrightboundary(Node *root, vector<int> &res)
    {
        vector<int> temp;
        Node *curr = root->right;
        while (curr)
        {
            if (!isLeaf(curr))
                temp.push_back(curr->data);
            if (curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }
        for (int i = temp.size() - 1; i >= 0; i--)
        {
            res.push_back(temp[i]);
        }
    }

    void addleaf(Node *root, vector<int> &res)
    {
        if (isLeaf(root))
        {
            res.push_back(root->data);
            return;
        }
        if (root->left)
            addleaf(root->left, res);
        if (root->right)
            addleaf(root->right, res);
    }

    vector<int> boundaryTraversal(Node *root)
    {
        vector<int> res;
        if (root == NULL)
            return res;

        if (!isLeaf(root))
            res.push_back(root->data);

        addleftboundary(root, res);
        addleaf(root, res);
        addrightboundary(root, res);

        return res;
    }
};