#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n , x ;
        cin >> n >> x ;
        vector<long long>arr(n);
        for(long long i = 0 ;i < n ;i++){
            cin >> arr[i];
        }
        long long answer =0;
        long long left =0 ;
        long long right=2e9;
        while(left<=right){
            long long middle=(left+right)/2;
            long long water_count=0;

            for(long long i = 0 ;i < n ;i++){
                if(arr[i]<=middle){
                    water_count+=(middle-arr[i]);
                }
            }
            if(water_count<=x){
                answer=middle;
                left=middle+1;
            }else{
                right=middle-1;
            }
        }
        cout << answer << endl;

    }
    return 0;
}