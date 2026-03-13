#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int g[5][5];

  
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            cin >> g[i][j];

    vector<int> p = {0, 1, 2, 3, 4};
    int ans = 0;

    do {
        int tmp = 0;

        tmp += g[p[0]][p[1]] + g[p[1]][p[0]];
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];

        tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];

        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];

        ans = max(ans, tmp);

    } while(next_permutation(p.begin(), p.end()));

    cout << ans << endl;

    return 0;
}