#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string res = "";
    if (n >= m)
    {
        while (n > 0 && m > 0)
        {
            res += 'B';
            res += 'G';
            n--;
            m--;
        }
        while (n > 0)
        {
            res += 'B';
            n--;
        }
    }
    else
    {
        while (n > 0 && m > 0)
        {
            res += 'G';
            res += 'B';
            n--;
            m--;
        }
        while (m > 0)
        {
            res += 'G';
            m--;
        }
    }
    cout << res << endl;
    return 0;
}