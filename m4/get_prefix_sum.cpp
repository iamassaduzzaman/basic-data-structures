#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = a[i] + prefix[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            cout << prefix[i];
        }
        else
        {
            cout << " " << prefix[i];
        }
    }
    return 0;
}