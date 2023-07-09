#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    list<int> s1, q1;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val; cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val; cin >> val;
        q.push(val);
    }
    
    while(!st.empty())
    {
        s1.push_back(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        q1.push_back(q.front());
        q.pop();
    }
    
    if(n != m)
    {
        cout << "NO\n";
    }
    else
    {
        if(s1 == q1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}