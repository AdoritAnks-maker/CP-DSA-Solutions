#include<bits/stdc++.h>
using namespace std;

int longestsubarray(vector<int>a , long long  k){
    map<long long , int>map;
    long long sum =0;
    long long maxlen = 0;
    for(int i  = 0 ;i<a.size() ;i++){
        sum+=a[i];

        if(sum==k){
          maxlen = i+1;
        int rem = sum-k;
        if(map.find(rem)!=map.end()){
            int maxlen = max(maxlen , i-map[rem]);
        }

        if(map.find(sum)==map.end()){
            map[sum]=i;
        }
    }
    return maxlen;
}
}


int getsum(vector<int>&nums , int k  ){
    int left =0 ;
    int right =0;
    int n = nums.size();
    int sum=nums[0];
    int maxlen=0;
    while(right<n){
        while(sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen , right-left+1);
        }
        if(right<n){
            right++;
            sum+=nums[right];;
        }
    }

}