#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        bool left = false;
        bool right = false;
        bool upper = false;
        bool lower = false;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (arr[i].first == arr[j].first)
            {
                if (arr[j].second > arr[i].second)
                    right = true;
                if (arr[j].second < arr[i].second)
                    left = true;
            }
            if (arr[i].second == arr[j].second)
            {
                if (arr[j].first > arr[i].first)
                    upper = true;
                ;
                if (arr[j].first < arr[i].first)
                    lower = true;
                ;
            }
        }
        if (left && right && upper && lower)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
