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
        vector<int> arr(n);
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        bool found = false;
        for (auto x : mpp)
        {
            if (x.second > 1)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << -1 << "\n";
        }
        else
        {
            sort(arr.begin(), arr.end(), greater<int>());
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout <<  endl;
        }
    }
    return 0; 
}