#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    vector<int> arr;
    for (int i = 2; i <= n; i += 2)
    {
        arr.push_back(i);
    }
    for (int i = 1; i <= n; i += 2)
    {
        arr.push_back(i);
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
