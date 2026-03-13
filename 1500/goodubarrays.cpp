#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long count = 0;
        vector<int> prefsum(n+1,0);

        for(int i = 1; i <= n; i++) {
            prefsum[i] = prefsum[i-1] + (s[i-1]-'0');
        }

        map<long long,long long > freq;
        freq[0]++; // frequecny of the first element we have considered in the prefix sum 

        for(int i = 1; i <= n; i++) {
            long long curr = prefsum[i] - i;
            freq[curr]++;
        }
        for(auto x : freq ){
            count+=x.second*(x.second-1) / 2 ;
        }

        cout << count << endl;
    }

    return 0;
}