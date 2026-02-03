#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<pair<long long, long long>> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i].first >> prices[i].second;
    }
    string res = "";
    long long minans = min(prices[0].first, prices[0].second);
    long long sa = 0;
    long long sb = 0;
    
    for (int i = 0; i < n; i++)
    {
        if(((sa+prices[i].first)-sb)<=500){
            sa+=prices[i].first;
            res+='A';
        }else {
            sb+=prices[i].second;
            res+='G';
        }
    }
    cout << res << endl;
}