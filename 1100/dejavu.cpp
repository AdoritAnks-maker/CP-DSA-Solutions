#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n , q ;
        cin >> n >> q ;
        vector<long long>a(n);
        for(int i =0 ;i<n ;i++){
            cin >> a[i];
        }
        int mn = 31 ;
        vector<int>useful;
        for(int i  =0 ;i< q ;i++){
            int x ;
            cin >> x ;
            if(x < mn){
                useful.push_back(x);
                mn =x  ;
            }
        }
        for(int i = 0 ;i<n ;i++){
            for(auto p  : useful){
                if(a[i] % (1LL<<p) == 0)
                    a[i]+=(1LL<<(p-1));
            }
        }
        for(auto c: a){
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}