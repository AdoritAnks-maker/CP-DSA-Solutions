#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> ans;

void dfs(int node)
{
    visited[node] = true;
    ans.push_back(node);

    for (auto neigh : graph[node])
    {
        if (!visited[neigh])
        {
            dfs(neigh);
            ans.push_back(node);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    graph.resize(n + 1);
    visited.assign(n + 1, false);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(1);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << '\n';

    return 0;
}