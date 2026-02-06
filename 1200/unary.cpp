#include <bits/stdc++.h>
using namespace std;

string correspondingbinary(char c)
{
    string res = "";
    if (c == '>')
        res = "1000";
    if (c == '<')
        res = "1001";
    if (c == '+')
        res = "1010";
    if (c == '-')
        res = "1011";
    if (c == '.')
        res = "1100";
    if (c == ',')
        res = "1101";
    if (c == '[')
        res = "1110";
    if (c == ']')
        res = "1111";
    return res;
}

int main()
{
    string s;
    cin >> s;
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        res += correspondingbinary(s[i]);
    }
    long long value = 0;
    for (int i = 0; i < res.size(); i++)
    {
        int currentbit = res[i] - '0';
        value = (2 * value + currentbit) % 1000003;
    }
    cout << value << endl;
}