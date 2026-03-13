#include <bits/stdc++.h>
using namespace std;

long long gcdnum(long long a , long long b){
    if(b==0)return a; 
    return gcdnum(b , a%b);
}

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
        vector<long long> arr(n);
        long long total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total_sum += arr[i];
        }
        vector<int> prefsum(n);
        prefsum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefsum[i] = arr[i] + prefsum[i - 1];
        }
        long long mxmgcd=INT_MIN;
        for (int i = 0; i < n-1; i++)
        {
           long long gcdtt= gcdnum(prefsum[i] , total_sum-prefsum[i]);
            mxmgcd=max(mxmgcd , gcdtt);
        }
        cout << mxmgcd << endl;
    }
    return 0;
}