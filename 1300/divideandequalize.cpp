#include <bits/stdc++.h>
using namespace std;

vector<long long> factorization(long long n)
{
    vector<long long> factors;
    for (long long d = 2; d * d <= n; d++)
    {
        while (n % d == 0)
        {
            factors.push_back(d);
            n /= d;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
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

        map<long long, int> mpp;
        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            vector<long long> factans = factorization(arr[i]);

            for (auto x : factans)
            {
                if(x>1){
                    mpp[x]++;
                }
                
            }
        }

        bool ok = true;

        for (auto x : mpp)
        {
            if (x.second % n != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}