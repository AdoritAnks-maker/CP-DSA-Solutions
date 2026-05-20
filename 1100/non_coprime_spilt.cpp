#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int l, r;
        cin >> l >> r;

        if (r < 4)
        {
            cout << -1 << endl;
        }
        else if (l <= 4)
        {

            cout << "2 2" << endl;
        }
        else
        {
            if (r % 2 == 0)
            {
                cout << 2 << " " << (r - 2) << endl;
            }
            else
            {
                cout << 2 << " " << (r - 3) << endl;
            }
        }
    }

    return 0;
}