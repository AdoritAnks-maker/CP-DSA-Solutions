#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> s(m);
    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
    }
    sort(a.begin(), a.end());
    sort(s.begin(), s.end());
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - s[j]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else if (s[j] < a[i] - k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << count << endl;
}