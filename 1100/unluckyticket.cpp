#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s(2 * n, ' ');
    cin >> s;
    sort(s.begin(), s.begin() + n);
    bool allgreater = false;
    bool allsmaller = false;
    sort(s.begin() + n, s.end());
    int left = 0;
    int right = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[n + i])
        {
            cout << "NO" << endl;
            return 0;
        }
        if (s[i] > s[n + i])
            allsmaller = true;
        else
            allgreater = true;
    }
    if ((allsmaller && !allgreater) || (!allsmaller && allgreater))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}