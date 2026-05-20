#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int k;
    cin >> k;

    vector<int> freq(27);
    for (int i = 1; i <= 26; i++)
    {
        cin >> freq[i];
    }

    int len = s.size();
    long long sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += (i + 1) * freq[s[i] - 'a' + 1];
    }

    int mx = *max_element(freq.begin() + 1, freq.end());

    for (int i = 1; i <= k; i++)
    {
        sum += (len + i) * mx;
    }

    cout << sum <<  endl;
}