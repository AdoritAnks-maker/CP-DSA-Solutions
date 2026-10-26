#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>>adj(n , vector<int>(n , 0));
    for(int i = 0; i < m; i++)
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a][b] =  1;
        adj[b][a] = 1;

    int N = (1 << n);
    long long ans = 0 ;
    vector<vector<long long>> dp(N, vector<long long>(n, 0));
    for(int start =  0 ; start < n ;start++){
        fill(dp.begin() , dp.end(), vector<long long>(n,0));

        dp[1<< start][start] = 1;
        for(int mask  = 0 ;  mask < N ;  mask++){
            if(!mask &(1<< start))continue;
            for(int last = 0;  last < n ;  last++){
                if(!mask & (1<< last))continue;
                if(dp[mask][last]==0)continue;

                
            }
        }
    }
    
    
    cout << dp[N-1][n-1] << "\n";
    return  0;
}