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
        
        vector<long long> f(n + 1, 0);
        for(int i = 1; i <= n; i++){
            cin >> f[i];
        }

        vector<long long> arr(n + 1, 0);
        for(int i = 2; i < n; i++){
            arr[i] = (f[i+1] + f[i-1] - 2*f[i]) / 2;
        }

        long long sum = 0;
        for(int i = 2; i < n; i++){
            sum += arr[i];
        }

        arr[1] = (f[2] - f[1] + sum) / 2;

        long long total = 0;
        for(int i = 1; i < n; i++){
            total += arr[i];
        }
        arr[n] = -total;

        for(int i = 1; i <= n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}