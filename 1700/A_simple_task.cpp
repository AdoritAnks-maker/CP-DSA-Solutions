#include<bits/stdc++.h>
using namespace std ;

struct Node{
    string mn ;
    string mx ;
    Node(string m1 = "", string m2 = ""){
        mn = m1 ;
        mx = m2 ;
    }
};
struct SegmentTree{
    int n ;
    vector<Node> tree ;
    SegmentTree(string &a){
        n = a.size() ;
        tree.resize(4*n) ;
        build(1, 0, n-1, a) ;
    }
    Node merge(Node left, Node right){
        Node ans ;
        ans.mn = min(left.mn, right.mn) ;
        ans.mx = max(left.mx, right.mx) ;
        return ans ;
    }
    void build(int node, int l ,int r, string &a){
        if(l == r){
            tree[node] = Node(string(1, a[l]), string(1, a[l])) ;
            return ;
        }
        int mid = (l+r)/2 ;
        build(2*node, l, mid, a) ;
        build(2*node+1, mid+1, r, a) ;
        tree[node] = merge(tree[2*node], tree[2*node+1]) ;
    }
    void update(int node, int l, int r, int idx, char val){
        if(l == r){
            tree[node] = Node(string(1, val), string(1, val)) ;
            return ;
        }
        int mid = (l+r)/2 ;
        if(idx <= mid){
            update(2*node, l, mid, idx, val) ;
        }
        else{
            update(2*node+1, mid+1, r, idx, val) ;
        }
        tree[node] = merge(tree[2*node], tree[2*node+1]) ;
    }
}