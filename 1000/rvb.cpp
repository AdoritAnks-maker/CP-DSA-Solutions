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
        int n, r, b;
        cin >> n >> r >> b;
        string ans = "";
        int times = b + 1;
        int red_length = r / (b + 1);
        int extra_red = r % (b + 1);
        while (times--)
        {
            for (int i = 0; i < red_length; i++)
            {
                ans += 'R';
            }
            if (extra_red > 0)
            {
                ans += 'R';
                extra_red--;
            }
            if (times != 0)
            {
                ans += 'B';
            }
        }
        cout << ans << endl;
    }
    return 0;
}