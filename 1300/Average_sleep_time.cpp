#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    double fin = sum / k;

    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        fin += sum / k;
    }

    fin /= (n - k + 1);

    cout << fixed << setprecision(10) << fin * k << "\n";
}