#include<bits/stdc++.h>
using namespace std;

class Solution{
    public :
    vector<int>nearestsmaller(vector<int>&arr){
        int n =arr.size();
        stack<int>s;
        vector<int>nums;
        for(int i = 0;i<n;i++){
            if(s.size()==0){
                nums.push_back(-1);
            }else if(s.size()> 0 && s.top()<arr[i]){
                nums.push_back(s.top());
            }else if(s.size()>0 && s.top()>=arr[i]){
                while(s.size()>0 && s.top()>=arr[i]){
                    s.pop();
                }
                if(s.size()==0){
                    nums.push_back(-1);
                }else{
                    nums.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        return nums;
    }
};

int main(){
    Solution sol;
    vector<int>arr={4,5,2,10,8};
    vector<int>result=sol.nearestsmaller(arr);
    for(auto x : result){
        cout << x << " ";
    }
    cout << endl;

}