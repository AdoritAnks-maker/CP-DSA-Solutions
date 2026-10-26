
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), greater<int>());

    long long alice = 0, bob = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(nums[i] % 2 == 0){
                alice += nums[i];
            }
        }
        else{
            if(nums[i] % 2 == 1){
                bob += nums[i];
            }
        }
    }

    if(alice > bob){
        cout << "Alice\n";
    }
    else if(bob > alice){
        cout << "Bob\n";
    }
    else{
        cout << "Tie\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while(tc--){
        solve();
    }

    return 0;
}
