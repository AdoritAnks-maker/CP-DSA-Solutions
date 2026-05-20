#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int q;
    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int pos;
            char c;
            cin >> pos >> c;
            pos--;
            s[pos] = c;
        }
        if (type == 2)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            map<char, int> mpp;
            for (int i = l; i <= r; i++)
            {
                mpp[s[i]]++;
            }
            cout << mpp.size() << endl;
        }
    }
    return 0;
}