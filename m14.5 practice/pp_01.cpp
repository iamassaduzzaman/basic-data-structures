#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    int sz = 0;
    void push(int val)
    {
        sz++;
        l.push_back(val);
    }
    void pop()
    {
        sz--;
        l.pop_back();
    }
    int size()
    {
        return sz;
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    myStack st2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    int flag = 0;
    if (st1.size() == st2.size())
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = 1;
            }
            st1.pop();
            st2.pop();
        }

        if (flag == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}