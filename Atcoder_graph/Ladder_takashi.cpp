#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> graph;
unordered_set<int> visited;
int ans = 1;

void dfs(int node) {
    visited.insert(node);
    ans = max(ans, node);

    for (int nxt : graph[node]) {
        if (!visited.count(nxt)) {
            dfs(nxt);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    dfs(1);

    cout << ans << "\n";

    return 0;
}