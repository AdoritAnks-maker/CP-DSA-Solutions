#include <bits/stdc++.h>
using namespace std;

struct SegmentTree {
    int n;
    const int INF = 1e9;
    vector<int> lazy;

    SegmentTree(int n) {
        this->n = n;
        lazy.assign(4 * n, INF);
    }

    void push(int node) {
        if (lazy[node] != INF) {
            lazy[2 * node] = lazy[node];
            lazy[2 * node + 1] = lazy[node];
            lazy[node] = INF;
        }
    }

    void update(int node, int l, int r, int ql, int qr, int offset) {
        if (ql <= l && r <= qr) {
            lazy[node] = offset;
            return;
        }

        push(node);

        int mid = (l + r) / 2;

        if (ql <= mid)
            update(2 * node, l, mid, ql, qr, offset);

        if (qr > mid)
            update(2 * node + 1, mid + 1, r, ql, qr, offset);
    }

    int query(int node, int l, int r, int pos) {
        if (lazy[node] != INF)
            return lazy[node];

        if (l == r)
            return INF;

        int mid = (l + r) / 2;

        if (pos <= mid)
            return query(2 * node, l, mid, pos);

        return query(2 * node + 1, mid + 1, r, pos);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n);

    for (auto &x : a)
        cin >> x;

    for (auto &x : b)
        cin >> x;

    SegmentTree st(n);

    while (m--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x, y, k;
            cin >> x >> y >> k;

            --x;
            --y;

            st.update(1, 0, n - 1, y, y + k - 1, x - y);
        }
        else {
            int x;
            cin >> x;
            --x;

            int offset = st.query(1, 0, n - 1, x);

            if (offset == 1e9)
                cout << b[x] << '\n';
            else
                cout << a[x + offset] << '\n';
        }
    }

    return 0;
}