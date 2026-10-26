class Solution {
  public:
    int count (vector<int>&arr , int sum){
        int n  = arr.size();
        vector<vector<int>>dp(n+1 , vector<int>(sum+1));
        for(int i = 0 ;i<n+1;i++){
            dp[i][0] = 1;
        }
        for(int j  = 1;j<sum+1;j++){
            dp[0][j] = 0;
        }
        for(int i = 1;i<n+1;i++){
            for(int j = 0 ;j< sum+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j-arr[i-1]] + dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    int countPartitions(vector<int>& arr, int diff) {
        int sum = 0 ;
        int n = arr.size();
        for(int i  =0 ;i< n;i++){
            sum+=arr[i];
        }
        if((sum+diff)%2==1){
            return 0;
        }
        int tt_sum = (sum+diff)/2;
        int ans = count(arr , tt_sum);
        return ans;
    }
};  