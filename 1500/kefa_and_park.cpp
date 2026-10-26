#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> graph;
vector<int> cats;
int ans;
void dfs(int node, int parent, int consecutivecats)
{
    if (cats[node])
    {
        consecutivecats++;
    }
    else
    {
        consecutivecats = 0;
    }
    if (consecutivecats > m)
    {
        return;
    }
    bool isleaf = true;
    for (auto child : graph[node])
    {
        if (child == parent)
            continue;
        isleaf = false;
        dfs(child, node, consecutivecats);
    }
    if (isleaf)
    {
        ans++;
    }
}
int main()
{
    cin >> n >> m;
    graph.resize(n + 1);
    cats.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0, 0);
    cout << ans << endl;
}