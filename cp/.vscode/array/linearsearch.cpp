#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int idx=0;
    vector<int>nums={1,2,3,1,3,4,2,5,3,2,42,22};
    for(int i = 0 ;i<nums.size();i++){
        if(nums[i]==n){
            idx=i;
            break; // first occurence of the number 
        }
    }
    cout << idx << endl;
}