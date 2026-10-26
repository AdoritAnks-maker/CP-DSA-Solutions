#include<bits/stdc++.h>
using namespace std;

struct Node{
    int count7;
    int count4;
    int inc47;
    int inc74;

    Node(){
        count7 = 0;
        count4 = 0;
        inc47 = 0;
        inc74 = 0;
    }
};

struct SegmentTree{
    int n;
    vector<Node> tree;
    vector<bool> lazy;

    SegmentTree(string &s){
        n = s.size();
        tree.resize(4*n);
        lazy.resize(4*n, false);
        build(1, 0, n-1, s);
    }

    Node merge(Node a, Node b){
        Node res;

        res.count4 = a.count4 + b.count4;
        res.count7 = a.count7 + b.count7;

        res.inc47 = max({
            a.inc47,
            b.inc47,
            a.count4 + b.count7
        });

        res.inc74 = max({
            a.inc74,
            b.inc74,
            a.count7 + b.count4
        });

        return res;
    }

    void push(int node){
        if(!lazy[node]) return;

        swap(tree[node].count4, tree[node].count7);
        swap(tree[node].inc47, tree[node].inc74);

        if(lazy[node]){
            lazy[2*node] ^= 1;
            lazy[2*node+1] ^= 1;
        }

        lazy[node] = false;
    }

    void build(int node, int l, int r, string &s){
        if(l == r){
            if(s[l] == '4'){
                tree[node].count4 = 1;
                tree[node].inc47 = 1;
                tree[node].inc74 = 1;
            }
            else{
                tree[node].count7 = 1;
                tree[node].inc47 = 1;
                tree[node].inc74 = 1;
            }
            return;
        }

        int mid = (l+r)/2;

        build(2*node, l, mid, s);
        build(2*node+1, mid+1, r, s);

        tree[node] = merge(tree[2*node], tree[2*node+1]);
    }

    void update(int node, int l, int r, int ql, int qr){
        if(ql <= l && r <= qr){
            lazy[node] ^= 1;
            push(node);
            return;
        }

        push(node);

        int mid = (l+r)/2;

        if(ql <= mid)
            update(2*node, l, mid, ql, qr);

        if(qr > mid)
            update(2*node+1, mid+1, r, ql, qr);

        tree[node] = merge(tree[2*node], tree[2*node+1]);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    SegmentTree st(s);

    while(m--){
        string type;
        cin >> type;

        if(type == "switch"){
            int l, r;
            cin >> l >> r;

            l--;
            r--;

            st.update(1, 0, n-1, l, r);
        }
        else{
            cout << st.tree[1].inc47 << '\n';
        }
    }

    return 0;
}