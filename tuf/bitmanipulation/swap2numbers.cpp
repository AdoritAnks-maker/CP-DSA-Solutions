#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool checkithbit(int n, int i)
    {
        return n & (1 << i) != 0;
    }
};
int main()
{
    solution sol;
    int num = 13;
    int bitindex = 2;
    if (sol.checkithbit(num, bitindex))
    {
        cout << "set" << endl;
    }
    else
    {
        cout << "unset" << endl;
    }
    return 0;
}