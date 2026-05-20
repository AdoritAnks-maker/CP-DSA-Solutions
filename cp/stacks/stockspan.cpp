#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>stockspan(vector<int> & arr){
            int n = arr.size();
            stack<pair<int , int>>s;
            vector<int>store;
            for(int i = 0; i<n;i++){
                if(s.size()==0){
                    store.push_back(-1);
                }else if(s.size()>0 && s.top().first>arr[i]){
                    store.push_back(s.top().second);
                }else if(s.size()>0 && s.top().first<=arr[i]){
                    while(s.size()>0 && s.top().first<=arr[i]){
                        s.pop();
                    }if(s.size()==0){
                        store.push_back(-1);
                    }else{
                        store.push_back(s.top().second);
                    }
                }
                s.push({arr[i] , i});
            }
            for(int i =0;i<store.size();i++){
                store[i]=i-store[i];
            }
            return store;
        }
};

int main(){
    Solution sol;
    vector<int>arr={4,5,2,10,8};
    vector<int>result=sol.stockspan(arr);
    for(auto x : result){
        cout << x << " ";
    }
    cout << endl;

}
