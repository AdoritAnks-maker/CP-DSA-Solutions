#include<bits/stdc++.h>
using namespace std;

int main(){
    long long r , c ;
    cin >> r >> c ;
    char arr[10][10];
    for(int i = 0 ;i< r ;i++){
        for(int j=0;j<c ;j++){
            cin >> arr[i][j];
        }
    }
    vector<bool> saferow(r, true);
    vector<bool>safecol(c , true);
    int count = 0;
    for(int i = 0;i<r ;i++){
        for(int j =0 ;j <c ;j++){
            if(arr[i][j]=='s'){
                saferow[i]=false;
                saferow[j]=false;
            }
        }
    }
    int ans = 0;
    for(int i = 0;i<r ;i++)    {
        for(int j  =0 ;j<c ;j++){
            if(saferow[i] || saferow[j])
            ans++;
        }
    }
    cout << ans << endl;
}