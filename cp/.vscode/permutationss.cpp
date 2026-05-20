#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    char arr[4][4];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];

    map<char, int> freq;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] != '.')  
                freq[arr[i][j]]++;
        }
    }

    vector<int> fr;
    for (auto x : freq)
        fr.push_back(x.second);

    sort(fr.begin(), fr.end(), greater<int>());

    if (fr.empty() || fr[0] <= 2 * k)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
