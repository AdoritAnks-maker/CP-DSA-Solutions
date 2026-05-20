#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> insertion_sort(vector<int>&nums){
        int n = nums.size();
        for(int i=1 ;i<n ;i++ ){
            int key=nums[i];
            int j=i-1;
            while(j>=0 && nums[j]>key){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=key;
        }
        return nums;
    }

};

int main(){
    Solution solution ;
    vector<int>nums={12,23,32,23,44};

    nums=solution.insertion_sort(nums);

    for(auto num:nums){
        cout << num << " ";
    }
    cout << endl;

}