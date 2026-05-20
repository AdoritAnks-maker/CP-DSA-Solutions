// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         string s(n, ' ');
//         cin >> s;
//         long long moves = 0;
//         long long besti = 0;
//         long long bestj = 0;
//         long long result =0 ;
//         for (long long i = 0; i < n - 1; i++)
//         {
//             if (s[i] == '1' && s[i + 1] == '0')
//             {
//                 moves++;
//                 besti = i + 1;
//                 bestj = i + 2;
//                 result=bestj-besti+1;
//             }
//         }
//         if (moves % 2 == 1)
//         {
//             cout << "Alice" << endl;
//             cout << result << endl;
//             cout << besti << " " << bestj << endl ;
//         }
//         else
//         {
//             cout << "BOB" << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool inversion = false;
        for (int i = 0; i + 1 < n; i++) {
            if (s[i] == '1' && s[i + 1] == '0') {
                inversion = true;
                break;
            }
        }

        if (!inversion) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
            cout << n << "\n";
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
}