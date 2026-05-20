#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long n = s.size();

        vector<string> subs = {"75", "00", "25", "50"};

        int ans = INT_MAX;

        for (auto &x : subs)
        {
            int pos = s.find(x);
            if (pos != string::npos)
            {
                ans = min(ans, pos);
            }
        }

        if (ans == INT_MAX)
            cout << -1;
        else
            cout << min( abs(n-ans) , abs(0-ans)) << endl ;
    }
    return 0;
}