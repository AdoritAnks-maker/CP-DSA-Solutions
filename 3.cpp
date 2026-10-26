#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n ;
        string a(n, ' ');
        string b(n, ' ');
        cin >> a >> b;
        int even_count1 = 0;
        int odd_count1 = 0;
        int even_count2 = 0;
        int odd_count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (i % 2 == 0)
                {
                    even_count1++;
                }
                else
                {
                    odd_count1++;
                }
            }
            if (b[i] == '1')
            {
                if (i % 2 == 0)
                {
                    even_count2++;
                }
                else
                {
                    odd_count2++;
                }
            }
        }
        if (even_count1 == even_count2 && odd_count1 == odd_count2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}