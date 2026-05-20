#include <bits/stdc++.h>
using namespace std;

bool checkgcd(vector<long long> &arr)
{
    vector<long long> g;
    for (int i = 1; i < arr.size(); i++)
    {
        g.push_back(__gcd(arr[i], arr[i - 1]));
    }
    for (int i = 1; i < g.size(); i++)
    {
        if (g[i] < g[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> gcdarr;
        for (int i = 1; i < n; i++)
        {
            gcdarr.push_back(__gcd(arr[i - 1], arr[i]));
        }
        int idx = -1;
        for (int i = 1; i < gcdarr.size(); i++)
        {
            if (gcdarr[i] < gcdarr[i - 1])
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            cout << "YES" << endl;
            continue;
        }
        vector<long long> temp;
        // check if by removig the idx valuegcd becoemes non decreasing or increasing
        for (int i = 0; i < n; i++)
        {
            if (i != idx)
            {
                temp.push_back(arr[i]);
            }
        }
        bool ok = false;
        if (checkgcd(temp))
        {
            ok = true;
        }
        temp.clear();
        for (int i = 0; i < n; i++)
        {
            if (i != idx + 1)
            {
                temp.push_back(arr[i]);
            }
        }
        if (checkgcd(temp))
        {
            ok = true;
        }
        temp.clear();
        for (int i = 0; i < n; i++)
        {
            if (i != idx - 1)
            {
                temp.push_back(arr[i]);
            }
        }
        if (checkgcd(temp))
        {
            ok = true;
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}