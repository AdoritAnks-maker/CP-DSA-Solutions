#include<bits/stdc++.h>
using namespace std;

int main(){
    int target;
    cin >> target;
    vector<int>nums={3,4,4,7,8,10};
    int floor = 0;
    int ceil=0;
    for(int i=0 ;i<=nums.size();i++){
        if(nums[i]>target){
            ceil=nums[i];
            break;
        }
    }
    for(int i = nums.size()-1 ;i>=0;i--){
        if(nums[i]<target){
            floor=nums[i];
            break;
        }
    }
    cout << floor << " " << ceil << endl ;
}