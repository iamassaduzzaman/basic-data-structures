#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            cout << a[i];
        }
        else
        {
            cout << " " << a[i];
        }
    }

    return 0;
}