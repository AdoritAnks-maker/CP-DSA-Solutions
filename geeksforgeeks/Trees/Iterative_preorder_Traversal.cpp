#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *right;
    struct Node *left;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    vector<int> preorder(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        stack<Node *> st;
        st.push(root);
        while (!st.empty())
        {
            root = st.top();
            st.pop();

            ans.push_back(root->data);
            if (root->right != NULL)
            {
                st.push(root->right);
            }
            if (root->left != NULL)
            {
                st.push(root->left);
            }
        }
        return ans;
    }
};