#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long nthroot(long long x , long long m){
            long long  start=0;
            long long end = x ;
            while(start<=end){
                long long val=1;
                int mid= start+(end-start)/2;
                for(int i = 1 ;i<=m ;i++){
                    val*=mid;

                    if(val>x){
                        break;
                    }
                }
                if(val==x)return mid;
                if(val<x){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return -1;
        }
};

int main(){
    long long m , n;
    cin >> m >> n;
    Solution sol;
    long long result = sol.nthroot(m , n );
    cout << result << endl ;
}