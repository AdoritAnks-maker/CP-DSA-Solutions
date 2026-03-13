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

        vector<long long> count(n + 1, 0);
        vector<long long> mx(n + 1, 0);

        
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= n)
                count[x]++;
        }

        for (int j = 1; j <= n; j++)
        {
            for (int x = j; x <= n; x += j)
            {
                mx[x] += count[j];  
            }
        }

        long long mx_elm = *max_element(mx.begin(), mx.end());
        cout << mx_elm << "\n";
    }

    return 0;
}