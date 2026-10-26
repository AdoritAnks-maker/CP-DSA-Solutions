
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
int m, d;
int dp[2001][2][2][2001];

int solve(string &s, int idx, bool tight, bool lz, int rem){
    if(idx == s.size()){
        return (rem == 0);
    }

    if(dp[idx][tight][lz][rem] != -1){
        return dp[idx][tight][lz][rem];
    }

    int lb = 0;
    int ub = tight ? s[idx]-'0' : 9;
    int res = 0;

    for(int dig = lb; dig <= ub; dig++){
        if((idx % 2 == 1 && dig != d) ||
           (idx % 2 == 0 && dig == d)) continue;

        // No leading zero
        if(idx == 0 && dig == 0) continue;

        int nr = (rem * 10LL + dig) % m;

        res = (res + solve(s, idx+1,
                           tight && (dig == s[idx]-'0'),
                           lz, nr)) % mod;
    }

    return dp[idx][tight][lz][rem] = res;
}

bool good(string &s){
    int rem = 0;

    for(int i = 0; i < s.size(); i++){
        int dig = s[i] - '0';

        if((i % 2 == 1 && dig != d) ||
           (i % 2 == 0 && dig == d)){
            return false;
        }

        rem = (rem * 10LL + dig) % m;
    }

    return rem == 0;
}

int main(){
    cin >> m >> d;

    string a, b;
    cin >> a >> b;

    memset(dp, -1, sizeof(dp));
    int ans = solve(b, 0, 1, 1, 0);

    memset(dp, -1, sizeof(dp));
    int res = solve(a, 0, 1, 1, 0);

    if(good(a)){
        res = (res - 1 + mod) % mod;
    }

    cout << (ans - res + mod) % mod << endl;

    return 0;
}
