#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int matrix[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                              {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                              {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                              {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                              {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                              {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                              {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                              {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                              {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                              {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
        char arr[10][10];
        long long sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                {
                    sum += matrix[i][j];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}