#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long > a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b = a;
    sort(b.begin(), b.end());
    vector<long long> prefsumA(n + 1, 0);
    vector<long long> prefsumB(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefsumA[i + 1] = prefsumA[i] + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefsumB[i + 1] = prefsumB[i] + b[i];
    }
    int m;
    cin >> m;
    int type, l, r;
    while (m--)
    {
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << prefsumA[r] - prefsumA[l - 1];
        }
        else
        {
            cout << prefsumB[r] - prefsumB[l - 1];
        }
        cout  << endl; 
    }
    return 0;
}