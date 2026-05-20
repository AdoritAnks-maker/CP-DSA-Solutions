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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int count0 = 0, count1 = 0;
        vector<bool> flip(n, false);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
                count0++;
            else
                count1++;

            if (count0 == count1)
                flip[i] = true;
        }

        bool isflipped = false;
        bool isposs = true;

        for (int i = n - 1; i >= 0; i--)
        {
            if (!isflipped)
            {
                if (a[i] != b[i])
                {
                    if (flip[i])
                        isflipped ^= true;
                    else
                    {
                        isposs = false;
                        break;
                    }
                }
            }
            else
            {
                if (a[i] == b[i])
                {
                    if (flip[i])
                        isflipped ^= true;
                    else
                    {
                        isposs = false;
                        break;
                    }
                }
            }
        }

        cout << (isposs ? "YES\n" : "NO\n");
    }
}