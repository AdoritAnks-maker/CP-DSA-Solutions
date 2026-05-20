#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        map<int ,int>mpp;
        queue<pair<Node* , int>>q;
        q.push({root , 0});
        while(!q.empty()){
            auto  p =  q.front();
            q.pop();
            Node*node = p.first ;
            int level =p.second;
            if(mpp.find(level)==mpp.end()){
                mpp[level]=node->data;
            }
            if(node->left!=NULL){
                q.push({node->left , level+1});
            }
            if(node->right!=NULL){
                q.push({node->right, level+1});
            }
        }
        for(auto x : mpp){
            ans.push_back(x.second);
        }
        return ans;
    }
};