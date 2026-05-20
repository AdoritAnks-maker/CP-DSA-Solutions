#include <bits/stdc++.h>
using namespace std;

int digit_sum(long long x){
    int s = 0;
    while(x){
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        vector<int> cnt(10,0);
        for(char c: s) cnt[c-'0']++;

        bool done = false;

        for(int z=1; z<=9 && !done; z++){
            if(cnt[z]==0) continue;

            vector<int> c = cnt;
            c[z]--;

            for(int y=z; y<=81 && !done; y++){
                if(digit_sum(y)!=z) continue;

                string ys = to_string(y);

                vector<int> c2 = c;
                bool ok = true;

                for(char ch: ys){
                    if(c2[ch-'0']==0){
                        ok=false;
                        break;
                    }
                    c2[ch-'0']--;
                }

                if(!ok) continue;

                int need = y;
                int have = 0;

                for(int d=1; d<=9; d++)
                    have += c2[d]*d;

                if(have != need) continue;

                string xs="";
                for(int d=1; d<=9; d++)
                    xs += string(c2[d], char('0'+d));
                xs += string(c2[0], '0');

                if(xs[0]=='0') continue;

                cout << xs << ys << z << "\n";
                done = true;
            }
        }
    }
}