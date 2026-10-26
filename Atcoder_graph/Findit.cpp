#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<int> nxt;
vector<int> state;

bool dfs(int node)
{
    state[node] = 1;
    int nxt_node = nxt[node];
    if (state[nxt_node] == 0)
    {
        if (dfs(nxt_node))
            return true;
    }
    else if (state[nxt_node] == 1)
    {
        ans.push_back(nxt_node);
        int curr = nxt[nxt_node];
        while (curr != nxt_node)
        {
            ans.push_back(curr);
            curr = nxt[curr];
        }

        return true;
    }
    state[node] = 2;
    return false;
}

int main()
{
    int n;
    cin >> n;
    nxt.resize(n + 1);
    state.assign(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> nxt[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (state[i] == 0)
        {
            if (dfs(i))
                break;
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
