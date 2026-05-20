#include <bits/stdc++.h>
using namespace std;


string add(string a, string b) {
    if(a.size() < b.size()) swap(a, b);
    while(b.size() < a.size()) b = '0' + b;
    string res = "";
    int carry = 0;
    for(int i = a.size()-1; i >= 0; i--) {
        int sum = (a[i]-'0') + (b[i]-'0') + carry;
        carry = sum/10;
        res = char(sum%10 + '0') + res;
    }
    if(carry) res = char(carry+'0') + res;
    return res;
}

struct matrix {
    string mat[2][2];
    matrix friend operator*(const matrix &a, const matrix &b) {
        matrix c;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                c.mat[i][j] = "0";
                for(int k=0;k<2;k++){
                    c.mat[i][j] = add(c.mat[i][j], 
                                      to_string(stoll(a.mat[i][k])));
                }
            }
        }
        return c;
    }
};


string fib(int n) {
    if(n==0) return "0";
    if(n==1) return "1";
    string a="0", b="1";
    for(int i=2;i<=n;i++){
        string c = add(a,b);
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    string p = fib(n);
    cout << p.size() <<  endl;
    
}