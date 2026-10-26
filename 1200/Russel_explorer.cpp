
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int cnt = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        cnt++;

        if(cnt >= nums[i]){
            ans++;
            cnt = 0;
        }
    }

    cout << ans << "\n";
}

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        solve();
    }

    return 0;
}
