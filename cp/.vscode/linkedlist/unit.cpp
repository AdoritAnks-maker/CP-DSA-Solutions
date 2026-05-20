// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int  n ;
//     cin >> n ;
//     vector<int>arr(n);
//     for(int i = 0;i<n ;i++){
//         cin >> arr[i];
//     }
//     int min_diff=abs(arr[n-1]-arr[0]);
//     int idx1=n ;
//     int idx2=1;
//     int temp[2] ={n-1, 0};
//     for(int i = 0;i<n ;i++){
//         int diff=0;
//         for(int j =i+1 ;j<n ;j++){
//              diff = arr[j]-arr[i];
//              if(diff<min_diff){
//                 min_diff=diff;
//                 idx1=i+1;
//                 idx2=j+1;
//              }
//         }
//     }
//     cout << idx1 << " " << idx2 << endl ;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min_diff = abs(arr[0] - arr[n-1]);
    int idx1 = n, idx2 = 1;

    for(int i = 0; i < n - 1; i++){
        int diff = abs(arr[i] - arr[i+1]);
        if(diff < min_diff){
            min_diff = diff;
            idx1 = i + 1;
            idx2 = i + 2;
        }
    }

    cout << idx1 << " " << idx2 << endl;
    return 0;
}
