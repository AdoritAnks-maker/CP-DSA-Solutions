#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s(n, ' ');
        cin >> s;
        int lentt = 1;
        for(int i =1; i<n;i++){
            if(s[i] != s[i-1]){
                lentt++;
            }
        }
        int ans  = lentt;
        for(int i =1;i<=n-2;i++){
            int curr = lentt;
            if(s[i] != s[i-1]){
                curr--;
            }
            if(s[i] != s[i+1]){
                curr--;
            }
            if(s[i-1] != s[i+1]){
                curr++;
            }
            ans = min(ans, curr);
        }
        cout << ans << endl;
    }
}