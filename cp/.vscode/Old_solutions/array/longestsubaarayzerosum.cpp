#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int longestsubaaray(vector<int>& nums){
            int n = nums.size();
            int max_sum=INT_MIN;
            for(int i = 0;i<n ;i++){
                int sum=0 ;
                for(int j = i ;j<n ;j++){
                    sum+=nums[j];
                    if(sum==0){
                        int length=j-i+1;
                        max_sum=max(length , sum);
                    }
                }
            }
            return max_sum;
        }
};

int main(){
    Solution sol;
    vector<int>arr={-9,-3,3,-1,6,-5};
    cout << sol.longestsubaaray(arr);
}