#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;
vector<int> color;
int cnt0 = 0, cnt1 = 0;

void dfs(int node, int c)
{
    color[node] = c;
    if (c == 0)
        cnt0++;
    else
        cnt1++;
    for (auto neigh : graph[node])
    {
        if (color[neigh] == -1)
        {
            dfs(neigh, 1 - c);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    graph.resize(n + 1);
    color.assign(n + 1, -1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0);
    int ans = 1LL * cnt0 * cnt1 - m;
    cout << ans << endl;
}