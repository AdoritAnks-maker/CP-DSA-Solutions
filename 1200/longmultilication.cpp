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
        string x, y;
        cin >> x >> y;
        int n = x.size();
        bool decided = false;
        bool xgreater = false;
        for (int i = 0; i < n; i++)
        {
            if (!decided)
            {
                if (x[i] == y[i])
                    continue;
                if (x[i] > y[i])
                {
                    xgreater = true;
                }
                else
                {
                    xgreater = false;
                }
                decided = true;
            }
            else
            {
                if (xgreater)
                {
                    if (x[i] > y[i])
                    {
                        swap(x[i], y[i]);
                    }
                }
                else
                {
                    if (x[i] < y[i])
                    {
                        swap(x[i], y[i]);
                    }
                }
            }
        }
        cout << x << endl;
        cout << y << endl;
    }
    return 0;
}