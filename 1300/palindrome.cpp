#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char, int> freq;
    for (auto x : s)
    {
        freq[x]++;
    }
    int count = 0;
    for (auto x : freq)
    {
        if (x.second % 2 == 1)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "First" << endl;
    }

    if (count > 1 && count % 2 == 0)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
    }
    return 0;
}