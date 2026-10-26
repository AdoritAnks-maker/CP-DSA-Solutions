#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int sum = 0;
    int xr = 0;
    Node(int s = 0, int x = 0)
    {
        sum = s;
        xr = x;
    }
};
struct SegmentTree
{
    int n;
    vector<Node> tree;
    SegmentTree(vector<int> &a)
    {
        n = a.size();
        tree.resize(4 * n);
        build(1, 0, n - 1, a);
    }
    Node merge(Node a, Node b)
    {
        Node res;
        res.sum = a.sum + b.sum;
        res.xr = a.xr ^ b.xr;
        return res;
    }
    void build(int node, int l, int r, vector<int> &a)
    {
        if (l == r)
        {
            tree[node] = Node(a[l], a[l]);
        }
        else
        {
            int mid = (l + r) / 2;
            build(2 * node, l, mid, a);
            build(2 * node + 1, mid + 1, r, a);
            tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
        }
    }
    void update(int node, int l, int r, int idx, int val)
    {
        if (l == r)
        {
            tree[node] = Node(val, val);
            return;
        }
        else
        {
            int mid = (l + r) / 2;
            if (idx <= mid)
            {
                update(2 * node, l, mid, idx, val);
            }
            else
            {
                update(2 * node + 1, mid + 1, r, idx, val);
            }
            tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
        }
    }
    Node query(int node, int l, int r, int ql, int qr)
    {
        if (ql > r || qr < l)
        {
            return Node(0, 0);
        }
        if (ql <= l && r <= qr)
        {
            return tree[node];
        }
        int mid = (l + r) / 2;
        Node left = query(2 * node, l, mid, ql, qr);
        Node right = query(2 * node + 1, mid + 1, r, ql, qr);
        return merge(left, right);
    }
    Node query(int l, int r)
    {
        return query(1, 0, n - 1, l, r);
    }
};

signed main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &x : nums)
    {
        cin >> x;
    }
    SegmentTree st(nums);
    int q;
    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            Node ans = st.query(l, r);
            cout << ans.sum << "\n";
        }
        if (type == 2)
        {
            int idx, val;
            cin >> idx >> val;
            idx--;
            st.update(1, 0, n - 1, idx, val);
        }
    }
    return 0 ;
}
