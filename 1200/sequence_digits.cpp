#include <bits/stdc++.h>
using namespace std;

long long prodc(long long a, long long b)
{
    return a * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a1, k;
        cin >> a1 >> k;

        long long rex = a1;

        for (long long i = 1; i < k; i++)
        {
            string s = to_string(rex);
            sort(s.begin(), s.end());

            long long mn = s[0] - '0';
            long long mx = s[s.size() - 1] - '0';

            if (mn == 0) break; 

            rex = rex + (mn * mx);
        }

        cout << rex << "\n";
    }
}