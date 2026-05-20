// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         long long calculatesqaresum(vector<long long>&nums , long long k){
//             long long sqsum=0;
//             for(auto x : nums){
//                 long long side = x+2*k;
//                 sqsum+=side*side;
//             }
//             return sqsum;
//         }
// };

// int main(){
//     Solution sol ;

//     long long t ;
//     cin >> t ;
//     while(t--){
//         long long n , c ;
//         cin >> n >> c ;
//         vector<long long>arr(n);
//         for(long long i =0;i<n;i++){
//             cin >> arr[i];
//         }
//         long long ans =-1;
//         long long low=1;
//         long long  high=1e9;
//         while(low<=high){
//             long long mid=low+(high-low)/2;
//             long long result=sol.calculatesqaresum(arr,mid);
//             if(result==c){
//                 ans = mid ;
//                 break;
//             }else if(result < c){
//                 low=mid+1;
//             }else{
//                 high=mid-1;
//             }
//         }
//         cout << ans << endl ;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long calculatesqaresum(const vector<long long>& nums, long long k) {
        long long sqsum = 0;
        for (auto x : nums) {
            // Safe computation without __int128
            if (k >= 1000000000LL) return 4000000000000000000LL;  // Cap large k
            long long side = x + 2 * k;
            if (side <= 0 || side >= 3000000000LL) return 4000000000000000000LL;
            
            // Safe multiply and add
            long long sq = side * side;
            if (sqsum > 4000000000000000000LL - sq) {
                return 4000000000000000000LL;  // Overflow
            }
            sqsum += sq;
            if (sqsum > 4000000000000000000LL) {
                return 4000000000000000000LL;
            }
        }
        return sqsum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution sol;
    long long t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        long long ans = -1;
        long long low = 0;
        long long high = 2000000000LL;  // 2e9 safe upper bound
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long result = sol.calculatesqaresum(arr, mid);
            
            if (result >= c) {
                ans = mid;
                high = mid - 1;  // Find minimal k
            } else {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
