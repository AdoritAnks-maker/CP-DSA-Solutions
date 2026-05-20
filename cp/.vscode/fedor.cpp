#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> arr(m+1);
    for(long long i = 0; i < m+1; i++){
        cin >> arr[i];
    }
    long long count = 0;
    for(long long i = 0; i < m; i++){
        long long diff = arr[m] ^ arr[i];
        long long bit_count = __builtin_popcountll(diff);
        if(bit_count <= k){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
