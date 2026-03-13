// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int n, m;
// //     cin >> n >> m;

// //     vector<vector<char>> matrix(n, vector<char>(m));
// //     for (int i = 0; i < n; i++)
// //         for (int j = 0; j < m; j++)
// //             cin >> matrix[i][j];

// //     vector<int> colidx;
// //     for (int j = 0; j < m; j++)
// //     {
// //         int colmax = matrix[0][j];
// //         for (int i = 1; i < n; i++)
// //         {
// //             if (matrix[i][j] >colmax)
// //             {
// //                 colidx.push_back(j);
// //             }

// //         }
// //         for(int i =1 ;i< n;i++){
// //             if(matrix[i][j]==colmax){
// //                 colidx.push_back(j);
// //             }
// //         }
// //     }
// //     set<int> result(colidx.begin(), colidx.end());

// //     cout << result.size();
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<vector<char>> matrix(n, vector<char>(m));
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             cin >> matrix[i][j];

//     vector<vector<int>> ans(m);

//     for (int j = 0; j < m; j++)
//     {
//         char colMax = matrix[0][j];

//         for (int i = 1; i < n; i++)
//         {
//             if (matrix[i][j] > colMax)
//             {
//                 colMax = matrix[i][j];
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (matrix[i][j] == colMax)
//             {
//                 ans[j].push_back(i);
//             }
//         }
//     }
//     set<int> result(ans.begin(), ans.end());
//     cout << result.size() << endl;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    set<int> result;   

    for (int j = 0; j < m; j++) {
        char colMax = matrix[0][j];

    
        for (int i = 1; i < n; i++) {
            if (matrix[i][j] > colMax) {
                colMax = matrix[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == colMax) {
                result.insert(i);   
            }
        }
    }

    cout << result.size() << endl;

    return 0;
}