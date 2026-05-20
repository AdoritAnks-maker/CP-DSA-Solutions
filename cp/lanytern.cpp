#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, l;
    cin >> n >> l;
    vector<long long> arr(n);
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    double max_dist = 0;
    for(long long i = 1; i < n; i++){
        max_dist = max(max_dist, (double)(arr[i] - arr[i-1]));
    }
    double distance_from_first = arr[0];
    double dist_from_end = l - arr[n-1];
    double half_dist = max_dist / 2;
    double ans = max(half_dist, max(distance_from_first, dist_from_end));
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
