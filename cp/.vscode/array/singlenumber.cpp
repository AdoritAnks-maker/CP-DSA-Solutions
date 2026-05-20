#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getsingleelement(vector<int>&nums){
            int n=nums.size();
            map<int,int>freq;
            for(int i =0;i<n;i++){
                freq[nums[i]]++;
            }
            int result=0;
            for(int i =0;i<n;i++){
                if(freq[nums[i]]==1){
                    return nums[i];
                }
            }
            return -1 ;  // no unique element 
        }
};

int main(){
    vector<int>arr={4,1,2,1,2};
    Solution pacex;
    cout << pacex.getsingleelement(arr);
}