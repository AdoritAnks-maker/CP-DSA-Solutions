#include<bits/stdc++.h>
using namespace std;

long long n, k;
vector<long long> nums;

bool check(long long x){
    long long moves = 0;

    for(int i = n/2; i < n; i++){
        if(nums[i] < x){
            moves += x - nums[i];

            if(moves > k)
                return false;
        }
    }

    return true;
}

int main(){
    cin >> n >> k;

    nums.resize(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    long long low = 1;
    long long high = 2e9;
    long long ans = 0;

    while(low <= high){
        long long mid = low + (high - low) / 2;

        if(check(mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}