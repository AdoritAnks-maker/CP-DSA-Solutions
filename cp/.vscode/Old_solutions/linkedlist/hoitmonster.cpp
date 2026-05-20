#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long hc , dc , hm , dm, k, w,a ;
        cin >> hc >> dc ;
        cin >> hm >> dm ;
        cin >> k >> w >> a ;
        bool ok = false;
        for(int i =  0; i<=k ;i++){
            long long  attack = dc+i*w;
            long long health=hc+(k-i)*a;

            long long hero_turns=(hm+attack-1)/attack;
            long long monster_turns=(health+dm-1)/dm;

            if(hero_turns<=monster_turns){
                ok= true;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}