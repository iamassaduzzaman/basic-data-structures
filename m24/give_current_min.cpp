#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<long long int, vector<long long int>, greater<long long int>> p;
    int n;
    cin >> n;
    while (n--)
    {
        long long int val;
        cin >> val;
        p.push(val);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            long long int val;
            cin >> val;
            p.push(val);
            if (p.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << p.top() << endl;
            }
        }

        if (x == 1)
        {
            if (p.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << p.top() << endl;
            }
        }

        if (x == 2)
        {
            if (p.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                p.pop();
                if (p.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << p.top() << endl;
                }
            }
        }
    }
    return 0;
}
