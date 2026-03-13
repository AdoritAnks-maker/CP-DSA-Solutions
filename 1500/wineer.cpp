#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<string, int>> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i].first >> scores[i].second;
    }
    map<string, int> mpp;
    for (auto x : scores)
    {
        mpp[x.first] += x.second;
    }
    map<string, int> firstreach;
    int max_score = INT_MIN;
    for (auto x : mpp)
    {
        max_score = max(max_score, x.second);
    }
    for (auto x : scores)
    {
        firstreach[x.first] += x.second;

        if (firstreach[x.first] >= max_score && mpp[x.first] == max_score)
        {
            cout << x.first << endl;
            break;
        }
    }
    return 0;
}