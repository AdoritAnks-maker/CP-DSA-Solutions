#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long sub_arr_sum = 0;
    for(long long i = 0; i < k; i++){
        sub_arr_sum += arr[i];
    }
    long long min_sum = sub_arr_sum;
    long long start_index = 0;
    for(long long i = k; i < n; i++){
        sub_arr_sum += arr[i] - arr[i-k];
        if(sub_arr_sum < min_sum){
            min_sum = sub_arr_sum;
            start_index = i - k + 1;
        }
    }
    cout << start_index+1 << endl;
    return 0;
}
