#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count25 = 0;
    int count50 = 0;
    int count75 = 0;
    bool ok = true;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] == 25)
            count25++;
        if (arr[i] == 50)
        {
            count50++;
            if (count25 >= 1)
            {
                count25--;
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (arr[i] == 100)
        {
            if (count50 >= 1 && count25 >= 1)
            {
                count25--;
                count50--;
            }
            else if (count25 >= 3)
            {
                count25 -= 3;
            }
            else
            {
                ok = false;
                break;
            }
        }
    }
    if(ok){
        cout << "YES" << endl ;
    }else{
        cout << "NO" << endl ;
    }
    return 0;
}
