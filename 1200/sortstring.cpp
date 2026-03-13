#include <bits/stdc++.h>
using namespace std;

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
        string s(n, ' ');
        cin >> s;
        string temp = s;
        if (is_sorted(s.begin(), s.end()))
        {
            cout << "Bob" << endl;
            continue;
        }
        sort(s.begin(), s.end());
        vector<int> idx;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != temp[i])
            {
                idx.push_back(i + 1);
            }
        }
        cout << "Alice" << endl;
        cout << idx.size() << endl;
        for (auto x : idx)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}