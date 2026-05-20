// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long n ;
//     cin >> n ;
//     vector<long long>arr(n);
//     for(int i= 0 ;i<n ;i++){
//         cin >> arr[i];
//     }
//     int m ;
//     cin >> m ;
//     int b ;
//     int petya=0;
//     int vasya=0;
//     while(m--){
//         cin >> b ;
//         for(int i = 0 ;i<n ;i++){
//             if(arr[i]==b){
//                 vasya+=i+1;
//                 petya+=(n-i);
//             }
//         }
//     }
//     cout << vasya << " " << petya << endl ;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n ;
    map<long long  , long long>pos;
    for(long long i = 0;i<n ;i++){
        long long x ;
        cin >> x ;
        pos[x]=i;
    }
    long long  m ;
    cin >> m ;
    long long  vasya=0;
    long long  petya=0;
    while(m--){
        int b ;
        cin >> b ;
        vasya+=pos[b]+1;
        petya+=n-pos[b];
    }
    cout << vasya << " " << petya  << endl;
    return 0;
}