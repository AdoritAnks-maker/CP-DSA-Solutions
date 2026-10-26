#include <bits/stdc++.h>
using namespace std;

#define int long long

struct SegmentTree
{
    int n;
    vector<int> tree, lazy;

    SegmentTree(vector<int> &a)
    {
        n = a.size();
        tree.resize(4 * n);
        lazy.assign(4 * n, 0);
        build(1, 0, n - 1, a);
    }

    void build(int node, int l, int r, vector<int> &a)
    {
        if (l == r)
        {
            tree[node] = a[l];
            return;
        }

        int mid = (l + r) / 2;

        build(node * 2, l, mid, a);
        build(node * 2 + 1, mid + 1, r, a);

        tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
    }

    void push(int node)
    {
        if (lazy[node] != 0)
        {
            int val = lazy[node];

            tree[node * 2] += val;
            lazy[node * 2] += val;

            tree[node * 2 + 1] += val;
            lazy[node * 2 + 1] += val;

            lazy[node] = 0;
        }
    }

    void update(int node, int l, int r, int ql, int qr, int val)
    {
        if (ql <= l && r <= qr)
        {
            tree[node] += val;
            lazy[node] += val;
            return;
        }

        push(node);

        int mid = (l + r) / 2;

        if (ql <= mid)
        {
            update(node * 2, l, mid, ql, qr, val);
        }

        if (qr > mid)
        {
            update(node * 2 + 1, mid + 1, r, ql, qr, val);
        }

        tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
    }

    int query(int node, int l, int r, int ql, int qr)
    {
        if (ql <= l && r <= qr)
            return tree[node];

        push(node);

        int mid = (l + r) / 2;

        int ans = LLONG_MAX;

        if (ql <= mid)
            ans = min(ans, query(2 * node, l, mid, ql, qr));

        if (qr > mid)
            ans = min(ans, query(2 * node + 1, mid + 1, r, ql, qr));

        return ans;
    }

    void circularupdate(int l, int r, int val)
    {
        if (l <= r)
        {
            update(1, 0, n - 1, l, r, val);
        }
        else
        {
            update(1, 0, n - 1, l, n - 1, val);
            update(1, 0, n - 1, 0, r, val);
        }
    }

    int circularquery(int l, int r)
    {
        if (l <= r)
        {
            return query(1, 0, n - 1, l, r);
        }

        return min(
            query(1, 0, n - 1, l, n - 1),
            query(1, 0, n - 1, 0, r)
        );
    }
};

int32_t main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (auto &x : nums)
    {
        cin >> x;
    }

    SegmentTree st(nums);

    int m;
    cin >> m;

    cin.ignore(); 

    while (m--)
    {
        int l, r;
        cin >> l >> r;

        string line;
        getline(cin, line);

        if (line.empty())
        {
            cout << st.circularquery(l, r) << "\n";
        }
        else
        {
            stringstream ss(line);

            int v;
            ss >> v;

            st.circularupdate(l, r, v);
        }
    }

    return 0;
}