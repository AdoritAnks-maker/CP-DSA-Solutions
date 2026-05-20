#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long sum =0;
        long long n;
        cin >> n;
        int first_digit =  n%10;
        sum+=((first_digit-1)*10);
        string s  = to_string(n);
        long long x = s.size();
        sum+=(x*(x+1)/2);

        cout << sum << endl ;
    }
    return 0;
}