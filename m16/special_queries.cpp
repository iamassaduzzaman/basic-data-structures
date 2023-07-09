#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if(m == 0)
        {
            string s;
            cin >> s;
            q.push(s);
            
        }
        if(m == 1)
        {
            if(!q.empty())
            {
            string s1 = q.front();
            q.pop();
            cout << s1 << endl;
            }
            else
            {
                cout << "Invalid\n";
            }

        }
    }
    return 0;
}