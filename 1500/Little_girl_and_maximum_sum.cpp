#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> freq(n, 0);

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--; r--;

        freq[l] += 1;
        if (r + 1 < n) freq[r + 1] -= 1;
    }

  
    for (int i = 1; i < n; i++)
    {
        freq[i] += freq[i - 1];
    }


    sort(arr.begin(), arr.end());
  sort(freq.begin(), freq.end());

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += arr[i] * freq[i];
    }

    cout << ans << endl ;
}