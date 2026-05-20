#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }

        long long sum = 1LL * n * (n + 1) / 2;

        if (arr.back() > sum)
        {
            cout << "NO\n";
            continue;
        }
        else if (arr.back() < sum)
        {
            if (arr.back() + n == sum)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

            continue;
        }
        vector<long long>diff;
        for(int i  =1; i<n-1;i++){
            diff.push_back(arr[i]-arr[i-1]);
        }
        vector<bool>used(n+1 , false);
        long long bad =-1;
        for(auto x: diff){
            if(x>=1 && x<=n && !used[x]){
                used[x]=true;
            }else{
                if(bad!=-1){
                    bad=-2;
                    break;
                }
                bad=x;
            }
        }
        if(bad==-2){
            cout << "NO" << endl;
            continue;
        }
        vector<int>missing;
        for(int i  =1;i<=n ;i++){
            
        }
    }
    return 0;
}