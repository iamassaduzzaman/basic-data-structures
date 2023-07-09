#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        q.push(s);
    }

    while (!q.empty())
    {
        string s1 = q.front();
        q.pop();
        int a = 0, b = 0;
        for (char c : s1)
        {
            if (c == 'A')
            {
                a++;
            }
            if (c == 'B')
            {
                b++;
            }
        }

        if (a == b)
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