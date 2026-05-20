// // // #include<bits/stdc++.h>
// // // using namespace std ;

// // // int main(){
// // //     long long t ;
// // //     cin >> t;
// // //     while(t--){
// // //         long long n , k ;
// // //         cin >> n >> k;
// // //         vector<long long> s(n) , t(n);
// // //         for(auto &x : s)cin >> x ;
// // //         for(auto &i : t)cin >> i;

// // //         map<pair<long  long ,  long long >, int>freqs , freqt;
// // //         for(auto x : s)freqs[{x%k , x}]++;
// // //         for(auto d : t)freqt[{d%k , d}]++;

// // //         if(freqs==freqt){
// // //             cout << "YES" << endl;
// // //         }else{
// // //             cout << "NO" << endl ;
// // //         }
// // //     }
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     ios_base::sync_with_stdio(false); cin.tie(NULL);
// //     long long t; cin >> t;
// //     while(t--){
// //         long long n, k; cin >> n >> k;
// //         vector<long long> s(n), tt(n);  // long long consistent
// //         for(auto &x : s) cin >> x;
// //         for(auto &x : tt) cin >> x;

// //         map<pair<long long, long long>, int> freqs, freqt;
// //         for(auto x : s) freqs[{x%k, x}]++;      // ++ FIXED
// //         for(auto x : tt) freqt[{x%k, x}]++;     // ++ FIXED

// //         cout << (freqs == freqt ? "YES\n" : "NO\n");
// //     }
// // }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long t ;
//     cin >> t ;
//     while(t--){
//         long long n , k ;
//         cin >> n >> k;
//         map<long long , long long > freq;
//         map<long long , long long >freq2;
//         vector<long long>s(n),t(n);
//         for(auto &x : s){
//             cin >> x ;
//             freq[x%k]++;
//         }
//         for(auto &x : t){
//             cin >> x ;
//             freq2[x % k]++;
//         }
//         if(freq==freq2){
//             cout << "YES" << endl;
//         }else{
//             cout << "NO" << endl;
//         }

//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> S(n), T(n);
        map<pair<long long, long long>, int> freqS, freqT;  // (x%k, x) → count

        for(auto &x : S) {
            cin >> x;
            freqS[{x % k, x}]++;  // Track BOTH residue AND value
        }

        for(auto &x : T) {
            cin >> x;
            freqT[{x % k, x}]++;
        }

        if(freqS == freqT)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
