#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n , t;
    cin >> n >>  t;
    string s(n , ' ');
    cin >> s;
    while(t--){
        for(long long i =0;i<n-1;++i){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i-1]);
                ++i;
            }
        }
    }
    cout << s << endl;
    return 0;

}