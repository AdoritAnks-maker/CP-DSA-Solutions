#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int consecutiveone(vector<int>&nums){
            int n = nums.size();
            int cnt=0;
            int max_cnt=0;
            for(int i=0;i<n;i++){
                if(nums[i]==1){
                    cnt++;
                    max_cnt=max(cnt,max_cnt);
                }else{
                    cnt=0;
                }
            }
            return max_cnt;
        }
};

int main(){
    vector<int>arr={1,1,0,1,1,1,0};
    Solution pacex;
    cout << pacex.consecutiveone(arr);
}