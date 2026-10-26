#include <bits/stdc++.h>
using namespace std;
#define int long long
struct Node
{
    int sum;
    int mx;

    Node(int s = 0, int m = 0)
    {
        sum = s;
        mx = m;
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

    Node merge(Node left, Node right)
    {
        Node res;
        res.sum = left.sum + right.sum;
        res.mx = max(left.mx, right.mx);
        return res;
    }

    void build(int node, int l, int r, vector<int> &a)
    {
        if (l == r)
        {
            tree[node] = Node(a[l], a[l]);
            return;
        }

        int mid = (l + r) / 2;

        build(node * 2, l, mid, a);
        build(node * 2 + 1, mid + 1, r, a);

        tree[node] = merge(tree[node * 2], tree[node * 2 + 1]);
    }

    void moduloupdate(int node, int l, int r,
                      int ql, int qr, int x)
    {
        if (r < ql || l > qr || tree[node].mx < x)
            return;

        if (l == r)
        {
            tree[node].sum %= x;
            tree[node].mx %= x;
            return;
        }

        int mid = (l + r) / 2;

        moduloupdate(node * 2, l, mid, ql, qr, x);
        moduloupdate(node * 2 + 1, mid + 1, r, ql, qr, x);

        tree[node] = merge(tree[node * 2],
                           tree[node * 2 + 1]);
    }
    void update(int node, int l, int r, int idx, int val)
    {
        if (l == r)
        {
            tree[node].sum = val;
            tree[node].mx = val;
            return;
        }
        int mid = (l + r) / 2;
        if (idx <= mid)
        {
            update(node * 2, l, mid, idx, val);
        }
        else
        {
            update(node * 2 + 1, mid + 1, r, idx, val);
        }
        tree[node] = merge(tree[node * 2], tree[node * 2 + 1]);
    }
    Node query(int node, int l, int r, int ql, int qr)
    {
        if (l > qr || r < ql)
        {
            return Node(0, 0);
        }
        if (r <= qr && l >= ql)
        {
            return tree[node];
        }
        int mid = (l + r) / 2;
        Node left = query(node * 2, l, mid, ql, qr);
        Node right = query(node * 2 + 1, mid + 1, r, ql, qr);
        return merge(left, right);
    }
    Node query(int left, int right)
    {
        return query(1, 0, n - 1, left, right);
    }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (auto &x : nums)
    {
        cin >> x;
    }
    SegmentTree seg(nums);

    while (m--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            Node ans = seg.query(l, r);
            cout << ans.sum << endl;
        }
        if (type == 2)
        {
            int l, r, x;
            cin >> l >> r >> x;
            l--;
            r--;
            seg.moduloupdate(1, 0, n - 1, l, r, x);
        }
        if (type == 3)
        {
            int k, x;
            cin >> k >> x;
            k--;
            seg.update(1, 0, n - 1, k, x);
        }
    }
    return 0;
}