#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> presum = {45, 57, 63 , 78, 89 , 97};
    int n = presum.size();
    vector<int> result(n);

    result[0] = presum[0];
    for (int i = 1; i < n; i++)
    {
        result[i] = presum[i] - presum[i - 1];
    }
    for (auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}

User function Template for C++
User function Template for C++
class Solution {
  public:
    vector<vector<int>> findAllPairs(vector<int> &arr, int target) {
        vector<vector<int>> result;
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int left =  0 ;
        int right =  n-1;
        while(left< right){
            int sum = arr[left]+arr[right];
            if(sum==target){
                result.push_back({left , right});
                while(left < right && arr[left]==arr[;eft+1])left++;
                while(left < right && arr[right]==arr[right-1])right--;
                
                left++;
                right--;
            }else if(sum < target){
                left++;
            }else{
                right --;
            }
        }
        return result;
    }
};