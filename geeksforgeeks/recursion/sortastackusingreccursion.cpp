#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp)
{
    if (st.size() == 0 || st.top() <= temp)
    {
        st.push(temp);
        return;
    }

    int val = st.top();
    st.pop();

    insert(st, temp);   // ✅ correct

    st.push(val);
}

void sort(stack<int> &st)
{
    if (st.size() == 1)
        return;

    int temp = st.top();
    st.pop();

    sort(st);

    insert(st, temp);
}

int main()
{
    int n;
    cin >> n;

    stack<int> st;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
    }

    sort(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}