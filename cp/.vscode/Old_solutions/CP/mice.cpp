// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     long long t ;
// //     cin >> t;
// //     while(t--){
// //         long long n ,k ;
// //         cin >> n >> k;
// //         vector<long long >arr(k);
// //         for(long long i =0;i<k ;i++){
// //             cin >> arr[i];
// //         }
// //         vector<long long>distance;
// //         for(long long  i = 0;i<k ;i++){
// //             distance[i]=n-arr[i];
// //         }
// //         sort(distance.begin() , distance.end() , greater<long long>());
// //         long long cat_moves=0;
// //         long long saved_mice=0;
// //         for(long long i = 0 ;i<k ;i++){
// //             if(distance[i]>cat_moves){
// //                 saved_mice++;
// //                 cat_moves++;
// //             }else{
// //                 break;
// //             }
// //         }
// //         cout << saved_mice << endl ;
// //     }
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--) {
//         long long n, k;
//         cin >> n >> k;

//         vector<long long> arr(k);
//         for (int i = 0; i < k; i++) {
//             cin >> arr[i];
//         }

//         vector<long long> dist(k);
//         for (int i = 0; i < k; i++) {
//             dist[i] = n - arr[i];
//         }

//         // Greedy step
//         sort(dist.begin(), dist.end(), greater<long long>());

//         long long time = 0;
//         long long saved = 0;

//         for (int i = 0; i < k; i++) {
//             if (dist[i] > time) {
//                 saved++;
//                 time++;
//             } else {
//                 break;
//             }
//         }

//         cout << saved << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> arr(k);
        for (int i = 0; i < k; i++)
            cin >> arr[i];
        sort(arr.rbegin(), arr.rend());
        long long count = 0;
        long long sum = 0;
        while (count < arr.size() && sum + n - arr[count] < n)
        {
            sum += n - arr[count++];
        }
        cout << count << endl;
    }
    return 0;
}
