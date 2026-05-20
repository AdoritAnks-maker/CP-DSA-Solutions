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
    {
        cin >> arr[i];
    }
    vector<long long> res;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long mn = *min_element(arr.begin() + l, arr.begin() + r);
        cout << mn << " ";
    }
    cout << endl;
}