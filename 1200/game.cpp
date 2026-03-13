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
        long long p, q;
        cin >> p >> q;
        int count = 0;
        if (3 * p >= 2 * q)
        {
            cout << "BOB" << endl;
        }else{
            cout << "Alice" << endl;
        }
    }
    return 0;
}