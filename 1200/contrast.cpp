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

        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        vector<long long> b;

        
        b.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
                b.push_back(arr[i]);
        }

        if (b.size() == 1)
        {
            cout << 1 << endl;
            continue;
        }

        int m = b.size();
        int answer = 2;  

        for (int i = 1; i < m - 1; i++)
        {
            if ((b[i] > b[i - 1] && b[i] > b[i + 1]) ||
                (b[i] < b[i - 1] && b[i] < b[i + 1]))
            {
                answer++;
            }
        }

        cout << answer << endl;
    }

    return 0;
}