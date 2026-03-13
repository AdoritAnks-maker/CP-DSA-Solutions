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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int start_idx = -1;
        int end_idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                end_idx = i;
                if (start_idx == -1)
                {
                    start_idx = i;
                }
            }
        }
        if(start_idx==-1){
            cout <<  1 << " " << n<<  endl;
            continue ;
        }
        while (start_idx > 0 && b[start_idx - 1] <= b[start_idx])
        {
            start_idx--;
        }
        while (end_idx < n-1 && b[end_idx + 1] >= b[end_idx])
        {
            end_idx++;
        }
        cout << start_idx + 1 << " " << end_idx + 1 << endl;
    }
}
