#include <bits/stdc++.h>
using namespace std;

#define int long long

struct SegmentTree
{
    int n;
    vector<int> tree;

    SegmentTree(vector<int> &a)
    {
        n = a.size();
        tree.resize(4 * n);
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

        tree[node] = __gcd(
            tree[node * 2],
            tree[node * 2 + 1]
        );
    }

    int query(int node, int l, int r, int ql, int qr)
    {
        if (r < ql || l > qr)
        {
            return 0;
        }

        if (ql <= l && r <= qr)
        {
            return tree[node];
        }

        int mid = (l + r) / 2;

        return __gcd(
            query(node * 2, l, mid, ql, qr),
            query(node * 2 + 1, mid + 1, r, ql, qr)
        );
    }

    void update(int node, int l, int r, int idx, int val)
    {
        if (l == r)
        {
            tree[node] = val;
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

        tree[node] = __gcd(
            tree[node * 2],
            tree[node * 2 + 1]
        );
    }

    int check(int node, int l, int r,
              int ql, int qr, int x)
    {
       
        if (r < ql || l > qr)
        {
            return 0;
        }

        if (ql <= l && r <= qr)
        {
            
            if (tree[node] % x == 0)
            {
                return 0;
            }

            if (l == r)
            {
                return 1;
            }
        }

        int mid = (l + r) / 2;

        int left = check(
            node * 2,
            l,
            mid,
            ql,
            qr,
            x
        );

        if (left >= 2)
        {
            return 2;
        }

        int right = check(
            node * 2 + 1,
            mid + 1,
            r,
            ql,
            qr,
            x
        );

        return min(2LL, left + right);
    }

    bool query(int l, int r, int x)
    {
        return check(1, 0, n - 1, l, r, x) <= 1;
    }

    void update(int idx, int val)
    {
        update(1, 0, n - 1, idx, val);
    }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &x : a)
    {
        cin >> x;
    }

    SegmentTree st(a);

    int q;
    cin >> q;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int l, r, x;
            cin >> l >> r >> x;

            l--;
            r--;

            if (st.query(l, r, x))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            int idx, val;
            cin >> idx >> val;

            idx--;

            st.update(idx, val);
        }
    }

    return 0;
}