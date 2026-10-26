
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long>nums(n);
    for(int i = 0; i<n; i++){
        cin >> nums[i];
    }
    unordered_map<long long ,int>mpp;
    vector<int>parent(n, -1);
    int ans  =1 , ans_idx =  0;
    vector<int>dp(n, 1);
    for(int i = 0; i< n;i++){
        auto it = mpp.find(nums[i]-1);
        if(it!=mpp.end()){
            int j  = it->second;
            dp[i] =  dp[j]+1;
            parent[i] = j ;
        }
        auto curr = mpp.find(nums[i]);
        if(curr==mpp.end()|| dp[i] > dp[curr->second]){
            mpp[nums[i]] = i ;
        }
        if(ans < dp[i]){
            ans = dp[i];
            ans_idx = i ;
        }
    }
    vector<int>indices; 
    while(ans_idx!=-1){
        indices.push_back(ans_idx+1);
        ans_idx =  parent[ans_idx];
    }
    reverse(indices.begin() , indices.end());
    cout << ans << "\n";
    for(auto &x : indices){
        cout << x << " ";
    }
    cout << "\n";
}


int main(){
    int tc;
    tc =1;
    while(tc--){
        solve();
    }

    return 0;
}
