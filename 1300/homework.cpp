// // #include <bits/stdc++.h>
// // using namespace std;

// // char shorterlenth(int a, int b, int c, int d)
// // {
// //     if (2 * a <= b && 2 * a <= c && 2 * a <= d)
// //         return 'A';
// //     else if (2 * b <= a && 2 * b <= c && 2 * b <= d)
// //         return 'B';
// //     else if (2 * c <= a && 2 * c <= b && 2 * c <= d)
// //         return 'C';
// //     else if (2 * d <= a && 2 * d <= b && 2 * d <= c)
// //         return 'D';
// //     return '0';
// // }

// // char longerlenth(int a, int b, int c, int d)
// // {
// //     if (a >= 2 * b && a >= 2 * c && a >= 2 * d)
// //         return 'A';
// //     else if (b >= 2 * a && b >= 2 * c && b >= 2 * d)
// //         return 'B';
// //     else if (c >= 2 * a && c >= 2 * b && c >= 2 * d)
// //         return 'C';
// //     else if (d >= 2 * a && d >= 2 * b && d >= 2 * c)
// //         return 'D';
// //     return '0';
// // }

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     string s1, s2, s3, s4;
// //     cin >> s1 >> s2 >> s3 >> s4;

// //     int lent1 = s1.size() - 2;
// //     int lent2 = s2.size() - 2;
// //     int lent3 = s3.size() - 2;
// //     int lent4 = s4.size() - 2;

// //     char isshorter = shorterlenth(lent1, lent2, lent3, lent4);
// //     char islonger = longerlenth(lent1, lent2, lent3, lent4);

// //     if (isshorter == '0' && islonger == '0')
// //     {
// //         cout << 'C' << endl;
// //     }
// //     else
// //     {
// //         if (isshorter == '0')
// //             cout << islonger << endl;
// //         else
// //             cout << isshorter << endl;
// //     }
// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// char shorterlenth(int a, int b, int c, int d)
// {
//     char ans = '0';
//     int cnt = 0;

//     if (2 * a <= b && 2 * a <= c && 2 * a <= d)
//         ans = 'A', cnt++;
//     if (2 * b <= a && 2 * b <= c && 2 * b <= d)
//         ans = 'B', cnt++;
//     if (2 * c <= a && 2 * c <= b && 2 * c <= d)
//         ans = 'C', cnt++;
//     if (2 * d <= a && 2 * d <= b && 2 * d <= c)
//         ans = 'D', cnt++;

//     if (cnt == 1) return ans;
//     return '0';
// }

// char longerlenth(int a, int b, int c, int d)
// {
//     char ans = '0';
//     int cnt = 0;

//     if (a >= 2 * b && a >= 2 * c && a >= 2 * d)
//         ans = 'A', cnt++;
//     if (b >= 2 * a && b >= 2 * c && b >= 2 * d)
//         ans = 'B', cnt++;
//     if (c >= 2 * a && c >= 2 * b && c >= 2 * d)
//         ans = 'C', cnt++;
//     if (d >= 2 * a && d >= 2 * b && d >= 2 * c)
//         ans = 'D', cnt++;

//     if (cnt == 1) return ans;
//     return '0';
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s1, s2, s3, s4;
//     cin >> s1 >> s2 >> s3 >> s4;

//     int lent1 = s1.size() - 2;
//     int lent2 = s2.size() - 2;
//     int lent3 = s3.size() - 2;
//     int lent4 = s4.size() - 2;

//     char isshorter = shorterlenth(lent1, lent2, lent3, lent4);
//     char islonger = longerlenth(lent1, lent2, lent3, lent4);

//     if (isshorter == '0' && islonger == '0')
//     {
//         cout << 'C' << endl;
//     }
//     else
//     {
//         if (isshorter == '0')
//             cout << islonger << endl;
//         else
//             cout << isshorter << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

char shorterlenth(int a, int b, int c, int d)
{
    char ans = '0';
    int cnt = 0;

    if (2 * a < b && 2 * a < c && 2 * a < d)
        ans = 'A', cnt++;
    if (2 * b < a && 2 * b < c && 2 * b < d)
        ans = 'B', cnt++;
    if (2 * c < a && 2 * c < b && 2 * c < d)
        ans = 'C', cnt++;
    if (2 * d < a && 2 * d < b && 2 * d < c)
        ans = 'D', cnt++;

    return (cnt == 1 ? ans : '0');
}

char longerlenth(int a, int b, int c, int d)
{
    char ans = '0';
    int cnt = 0;

    if (a >= 2 * b && a >= 2 * c && a >= 2 * d)
        ans = 'A', cnt++;
    if (b >= 2 * a && b >= 2 * c && b >= 2 * d)
        ans = 'B', cnt++;
    if (c >= 2 * a && c >= 2 * b && c >= 2 * d)
        ans = 'C', cnt++;
    if (d >= 2 * a && d >= 2 * b && d >= 2 * c)
        ans = 'D', cnt++;

    return (cnt == 1 ? ans : '0');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int lent1 = s1.size() - 2;
    int lent2 = s2.size() - 2;
    int lent3 = s3.size() - 2;
    int lent4 = s4.size() - 2;

    char isshorter = shorterlenth(lent1, lent2, lent3, lent4);
    char islonger  = longerlenth(lent1, lent2, lent3, lent4);

    if (isshorter == '0' && islonger == '0')
        cout << 'C' << '\n';
    else if (isshorter != '0')
        cout << isshorter << '\n';
    else
        cout << islonger << '\n';

    return 0;
}
