#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        bool asc = true;
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        sort(b, b + n);

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                asc = false;
            }
        }

        if (asc == true)
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