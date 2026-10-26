#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin >> n;

    vector<int> movie1(n), movie2(n);

    for(int i = 0; i < n; i++){
        cin >> movie1[i];
    }

    for(int i = 0; i < n; i++){
        cin >> movie2[i];
    }

    int cnt_movie1 = 0, cnt_movie2 = 0;
    for(int i = 0; i < n; i++){
        if(movie1[i] > movie2[i]){
            cnt_movie1 += movie1[i];
        }
        else if(movie2[i] > movie1[i]){
            cnt_movie2 += movie2[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(movie1[i] == movie2[i]){

            if(movie1[i] == 1){
                if(cnt_movie1 <= cnt_movie2){
                    cnt_movie1++;
                }
                else{
                    cnt_movie2++;
                }
            }

            else if(movie1[i] == -1){
                if(cnt_movie1 >= cnt_movie2){
                    cnt_movie1--;
                }
                else{
                    cnt_movie2--;
                }
            }
        }
    }

    return min(cnt_movie1, cnt_movie2);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        cout << solve() << '\n';
    }

    return 0;
}