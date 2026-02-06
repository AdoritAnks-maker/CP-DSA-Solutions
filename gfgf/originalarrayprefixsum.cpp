#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> presum = {45, 57, 63 , 78, 89 , 97};
    int n = presum.size();
    vector<int> result(n);

    result[0] = presum[0];
    for (int i = 1; i < n; i++)
    {
        result[i] = presum[i] - presum[i - 1];
    }
    for (auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}