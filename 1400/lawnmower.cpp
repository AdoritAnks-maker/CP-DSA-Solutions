#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, w;
        cin >> n >> w;
        long long kept_frmae = n / w;
        long long removed = n - kept_frmae;
        cout << removed << endl;
    }
    return 0;
}