#include<bits/stdc++.h>
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

class Solution {
  public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        if (root == NULL) return ans;

        stack<Node*> st;
        st.push(root);

        while (!st.empty()) {
            Node* curr = st.top();
            st.pop();

            ans.push_back(curr->data);

            if (curr->right != NULL)
                st.push(curr->right);

            if (curr->left != NULL)
                st.push(curr->left);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};