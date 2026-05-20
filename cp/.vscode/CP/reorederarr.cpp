#include<bits/stdC++.h>
using namespace std;

class Solution{
    public:
        vector<int>reorderarray(vector<int>& arr , vector<int>&index){
            int n = arr.size();
            int i = 0;
            while(i<n){
                if(index[i]==i){
                    i++;
                }else{
                    int correct = index[i];
                    swap(arr[i] , arr[correct]);
                    swap(index[i] ,index[correct]);

                }
            }
            return arr;
        }
};

int main(){
    Solution sol;
    vector<int>nums={10,11,12};
    vector<int>id={1,0,2};
    vector<int>ans=sol.reorderarray(nums , id);
    for(auto x : ans ){
        cout << x << " ";
    }
}