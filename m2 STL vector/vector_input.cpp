#include <bits/stdc++.h>
using namespace std;

int main()
{
    // type one
    // vector<int> v;
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for (int a : v)
    // {
    //     cout << a << " ";
    // }

    // type two
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}