#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int x;
        cin >> x;
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                found = true;
            }
        }

        if (found == false)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
    return 0;
}