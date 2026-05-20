#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n ;
    vector<vector<char>>mat(n, vector<char>(n));
    for(int i =0;i<n;i++){
        for(int j = 0; j<n ;j++){
            cin >> mat[i][j];
        }
    }
    char first = mat[0][0];
    bool same  =  true  ;
    char offdiag=mat[0][1];
    for(int i = 0;i< n;i++){
        for(int j = 0;j<n ;j++){
            if(i!=j && i+j!=n-1){
                if(mat[i][j]!=offdiag){
                    same = false;
                    break;
                }
            }else {
                if(i==j || i+j==n-1 ){
                    if(mat[i][j]!=first){
                        same = false;
                        break;
                    }
                }
            }
        }
    }
    if(first==offdiag)same = false;
    if(same){
        cout << "YES" << endl ;
    }else{
        cout << "NO" << endl ;
    }
}