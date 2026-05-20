#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>nearestsmallestleft(vector<int>&arr){
            stack<pair<int,int>>s;
            vector<int>nums;
            int n = arr.size();
            for(int i = 0;i<n;i++){
                if(s.size()==0){
                    nums.push_back(-1);
                }else if(s.size()>0 && s.top().first<arr[i]){
                    nums.push_back(s.top().second);
                }else if(s.size()>0 && s.top().first>=arr[i]){
                    while(s.size()>0 && s.top().first>=arr[i]){
                        s.pop();
                    }if(s.size()==0){
                        nums.push_back(-1);
                    }else{
                        nums.push_back(s.top().second);
                    }
                }
                s.push({arr[i] , i});
            }
            return nums;
        }

        vector<int>nearestsmallerright(vector<int>&arr){
            int n = arr.size();
            stack<pair<int , int>>s;
            vector<int>brr;
            for(int i = n-1 ;i>=0 ;i--){
                if(s.size()==0){
                    brr.push_back(-1);
                }else if(s.size()>0 && s.top().first<arr[i]){
                    brr.push_back(s.top().second);
                }else if(s.size()>0 && s.top().first>=arr[i]){
                    while(s.size()>0 && s.top().first>=arr[i]){
                        s.pop();
                    }if(s.size()==0){
                        brr.push_back(-1);
                    }else{
                        brr.push_back(s.top().second);
                    }
                }
                s.push({arr[i] , i});
            }
            reverse(brr.begin() , brr.end());
            return brr  ;
        }

        vector<int> wiotharray(vector<int>&nums, vector<int>&arr){
            int n = arr.size();
            vector<int>width(n);
            for(int i =0;i<n ;i++){
                width[i]=nums[i]-arr[i]-1;
            }
            return width;
        }
};

int main(){
    Solution sol;
    vector<int>arr={6,2,5,4,5,1,6};
    vector<int>left nearestsmallestleft(arr);
    vector<int>right=sol.nearestsmallerright(arr);
    vector<int>breadth=sol.wiotharray(left , right);
    vector<int>result(breadth.size());
    for(int i= 0;i<breadth.size();i++){
        result[i]=breadth[i]*arr[i];
    }
    int maxmarea=*max_element(result.begin() , result.end());
    cout << maxmarea << endl;
}