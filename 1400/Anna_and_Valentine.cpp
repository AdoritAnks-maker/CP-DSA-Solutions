#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main(){
    int tc;
    cin >> tc ;
    while(tc--){
        long long n ,  m;
        cin >> n  >> m ;
        vector<long long >arr(n);
        for(int i = 0 ;i< n;i++){
            cin >> arr[i];
        }
        sort(arr.begin() , arr.end());
        for(int i  = 0 ;i<n ;i++){
            long long pownum =  binpow(10 , arr[i]);
            if(pownum >= )
        }
    }
}