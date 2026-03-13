#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> bottles(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> bottles[i].first >> bottles[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        if (bottles[i].first != bottles[i].second && bottles[i].first < bottles[i].second)
        {
            count++;
        }
    }
    cout <<  count << endl;
}