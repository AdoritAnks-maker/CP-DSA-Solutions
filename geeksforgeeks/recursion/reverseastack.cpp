#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int key)
{
    if (st.size() == 0)
    {
        st.push(key);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st, key);
    st.push(temp);
    return;
}

void reverse(stack<int> &st)
{
    if (st.size() == 1)
    {
        return;
    }
    int key = st.top();
    st.pop();
    reverse(st);
    insert(st, key);
    return;
}
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
    }
    reverse(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}