#include<bits/stdc++.h>
using namespace std;

long long solve(string &s, int idx, bool tight, int cnt) {
    if(idx == s.size())
        return cnt;

    int lb = 0;
    int ub = tight ? s[idx] - '0' : 1;

    long long ans = 0;

    for(int dig = lb; dig <= ub; dig++) {
        bool ntight = tight && (dig == ub);

        if(dig == 0)
            ans += solve(s, idx + 1, ntight, cnt);
        else
            ans += solve(s, idx + 1, ntight, cnt + 1);
    }

    return ans;
}

int main() {
    long long n;
    cin >> n;

    string s = "";
    while(n > 0) {
        s += char('0' + n % 2);
        n /= 2;
    }

    reverse(s.begin(), s.end());

    cout << solve(s, 0, 1, 0)-1 << endl;
}