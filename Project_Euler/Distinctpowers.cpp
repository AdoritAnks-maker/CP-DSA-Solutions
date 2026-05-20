#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<long long> st;

    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j <= 100; j++)
        {
            long double num = j * log(i);              
            st.insert((long long)(num * 1e12));       
        }
    }

    cout << st.size() << endl;
}