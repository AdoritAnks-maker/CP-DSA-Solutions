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
        string s;
        cin >> s;

        int key = 0;
        vector<bool> got(n, false); 
        got[key] = true;

        for (int i = 0; i < n; i++)
        {
            if (s[key] == 'R') {
                key++;
            }
            else {
                key--;
            }
            got[key] = true;
        }

        int count = 0;
        for (bool x : got){
            if(x){
                count++;
            }
        }
        cout  << count  << endl;
    }
    return 0;
}