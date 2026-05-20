// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long a, b, x, y, n;
//         cin >> a >> b >> x >> y >> n;

//         long long a1 = a, b1 = b, n1 = n;
//         long long a2 = a, b2 = b, n2 = n;
//         long long prod1, prod2;
//         long long reduceA = min(a1 - x, n1);
//         n1 -= reduceA;
//         a1 -= reduceA;
//         long long reduceB = min(b1 - y, n1);
//         b1 -= reduceB;
//         prod1 = a1 * b1;

//         long long reduceBfirst = min(b2 - y, n2);
//         n2 -= reduceBfirst;
//         b2 -= reduceBfirst;
//         long long reduceAthen = min(n2, a2 - x);
//         a2 -= reduceAthen;
//         prod2 = a2 * b2;

//         cout << min(prod1, prod2) << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;
        int left = 1, right = n;

        while (left < right) {
            ans.push_back(left);
            ans.push_back(right);
            right--;
            left++;
        }

        if (left == right) {
            ans.push_back(left);
        }


        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
