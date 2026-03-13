#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        long long h;
        cin >> n >> h;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        long long start = 1;  
        long long end = h;    

        while(start <= end){
            long long mid = start + (end - start) / 2;

            long long sum = mid;

            for(int i = 0; i < n - 1; i++){
                sum += min(mid, arr[i+1] - arr[i]);
                if(sum >= h) break;   
            }

            if(sum < h){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        cout << start << endl;
    }
}