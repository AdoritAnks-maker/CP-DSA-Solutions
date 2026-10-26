#include <bits/stdc++.h>
using namespace std;

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
        Node ans;
        ans.sum = left.sum + right.sum;
        ans.mx = max(left.mx, right.mx);
        return ans;
    }
    void build(int node, int l, int r, vector<int> &a)
    {
        if (l == r)
        {
            tree[node] = Node(a[l], a[l]);
            return;
        }
        int mid = (l + r) / 2;
        build(2 * node, l, mid, a);
        build(2 * node + 1, mid + 1, r, a);
        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
    }
    void update(int node, int l, int r, int ql, int idx, int val)
    {
        if (l > r || l > idx || r < idx)
            return;
        if (l == r)
        {
            tree[node] = Node(val, val);
            return;
        }
        int mid = (l + r) / 2;
        update(2 * node, l, mid, ql, idx, val);
        update(2 * node + 1, mid + 1, r, ql, idx, val);
        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
    }
    void update2(int node, int l, int r, int ql, int qr, int idx, int val)
    {

        if (l > r || l > qr || r < ql)
            return;
        if (l == r)
        {
            tree[node].sum += val;
            tree[node].mx += val;
            return;
        }
        int mid = (l + r) / 2;
        update2(2 * node, l, mid, ql, qr, idx, val);
        update2(2 * node + 1, mid + 1, r, ql, qr, idx, val);
        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
    }
    Node query(int node, int l, int r, int ql, int qr)
    {

        if (l > r || l > qr || r < ql)
            return Node(0, INT_MIN);
        if (l >= ql && r <= qr)
            return tree[node];
        int mid = (l + r) / 2;
        Node left = query(2 * node, l, mid, ql, qr);
        Node right = query(2 * node + 1, mid + 1, r, ql, qr);
        return merge(left, right);
    }
    Node query(int left, int right)
    {
        return query(1, 0, n - 1, left, right);
    }
};

signed main()
{
    int n, q;
    cin >> n >> q;
    vector<int> nums(n);
    for (auto &x : nums)
    {
        cin >> x;
    }
    SegmentTree st(nums);
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int a, b, x;
            cin >> a >> b >> x;
            st.update2(1, 0, n - 1, a - 1, b - 1, 0, x);
        }
        if (type == 2)
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            st.update(1, 0, n - 1, a, a, b);
        }
        if (type == 3)
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            Node ans = st.query(a, b);
            cout << ans.sum << "\n";
        }
    }
    return 0;
}