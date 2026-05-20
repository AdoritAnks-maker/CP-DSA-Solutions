#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    vector<ll> neg, pos, zero;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] < 0)
        {
            neg.push_back(v[i]);
        }
        else if (v[i] > 0)
        {
            pos.push_back(v[i]);
        }
        else
        {
            zero.push_back(v[i]);
        }
    }

    vector<ll> arr1, arr2, arr3;

    if (!pos.empty())
    {
        arr1.push_back(neg.back());
        neg.pop_back();
        for (auto x : pos)
        {
            arr2.push_back(x);
        }

        while (!neg.empty())
        {
            arr3.push_back(neg.back());
            neg.pop_back();
        }
    }
    else
    {
        if (neg.size() % 2 == 1)
        {
            arr1.push_back(neg.back());
            neg.pop_back();

            while (!neg.empty())
            {
                arr2.push_back(neg.back());
                neg.pop_back();
            }
        }
        else
        {
            arr1.push_back(neg.back());
            neg.pop_back();

            arr3.push_back(neg.back());
            neg.pop_back();

            while (!neg.empty())
            {
                arr2.push_back(neg.back());
                neg.pop_back();
            }
        }
    }

    for (auto x : zero)
    {
        arr3.push_back(x);
    }

    cout << arr1.size() << " ";
    for (auto x : arr1)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << arr2.size() << " ";
    for (auto y : arr2)
    {
        cout << y << " ";
    }
    cout << endl;

    cout << arr3.size() << " ";
    for (auto z : arr3)
    {
        cout << z << " ";
    }
    cout << endl;
}

int main()
{
    fast;
    solve();
}