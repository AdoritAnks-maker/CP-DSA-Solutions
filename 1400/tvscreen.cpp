#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b ,c, d ;
    cin >> a >> b >> c >> d ;
    int max_width= max(a,c);
    int max_height=max(b,d);
    cout << (max_width - max_height) << "/" << max_width << endl;
    return  0;
}