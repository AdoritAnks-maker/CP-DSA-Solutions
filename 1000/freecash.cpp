#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int h, m;
    int count = 1;
    int max_count = 1;
    vector<pair<int, int>> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h >> m;
        nums[i] = {h, m};
    }
    for (int i = 1; i < n; i++)
    {
        if (nums[i].first == nums[i - 1].first && nums[i].second == nums[i - 1].second)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        max_count = max(max_count, count);
    }
    cout << max_count << endl;
}