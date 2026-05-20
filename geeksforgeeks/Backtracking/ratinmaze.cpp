#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct Choice
    {
        char dname;
        int dx, dy;
    };
    bool issolved(int x, int y, int n)
    {
        return x == n - 1 && y == n - 1;
    }
    bool isvalid(int x, int y, int n, vector<vector<int>> &arr)
    {
        return x >= 0 && x < n && y >= 0 && y < n && arr[x][y] == 1;
    }
    void solve(int x, int y, int n, string &path, vector<string> &res, vector<vector<int>> &arr, vector<Choice> &choices)
    {
        if (issolved(x, y, n))
        {
            res.push_back(path);
            return;
        }
        for (auto choice : choices)
        {
            int newx = x + choice.dx;
            int newy = y + choice.dy;
            if (isvalid(newx, newy, n, arr))
            {
                arr[x][y] = 0;
                path.push_back(choice.dname);
                solve(newx, newy, n, path, res, arr, choices);
                arr[x][y] = 1;
                path.pop_back();
            }
        }
    }
    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        string path = "";
        vector<string> ans;
        int x = 0;
        int y = 0;
        int n = maze.size();
        if (maze[0][0] == 0)
        {
            return ans;
        }
        vector<Choice> choices = {
            {'D', 1, 0},
            {'L', 0, -1},
            {'R', 0, 1},
            {'U', -1, 0}};
        solve(x, y, n, path, ans, maze, choices);
        return ans;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<string> result = sol.ratInMaze(arr);
    for (auto x : result)
    {
        cout << x << " ";
    }
    cout << endl;
}