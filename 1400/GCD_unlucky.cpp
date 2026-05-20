#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
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

        vector<long long> p(n), s(n);

        for (int i = 0; i < n; i++)
            cin >> p[i];

        for (int i = 0; i < n; i++)
            cin >> s[i];

        vector<long long> ans(n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = lcm(p[i], s[i]);  
            
        }

        bool ok = true;

        
        for (int i = 0; i < n - 1; i++)
        {
            if (p[i] % p[i + 1] != 0)
            {
                ok = false;
                break;
                
            }
        }

       
        for (int i = 1; i < n; i++)
        {
            if (s[i] % s[i - 1] != 0)
            {
                ok = false;
                break;
                
            }
        }

        
        long long g = 0;  
        
        for (int i = 0; i < n; i++)
        {
            g = __gcd(g, ans[i]);

            if (g != p[i])
            {
                ok = false;
                break;
             
            }
        }
        long long gm = 0;  
        for (int i = n - 1; i >= 0; i--)
        {
            gm = __gcd(gm, ans[i]);

            if (gm != s[i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl;
    }

    return 0;
}