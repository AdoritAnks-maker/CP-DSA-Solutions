#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a+4);
    long long x = a[3] - a[0];
    long long y = a[3] - a[1];
    long long z = a[3] - a[2];
    cout << x << " " << y << " " << z << endl;
    return 0;
}
