#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> v2(n+n);
    int j;
    for (j = 0; j < n; j++)
    {
        cin >> v2[j];
    }

    for (int i = 0; i < n; i++)
    {
        v2[j] = v[i];
        j++;
    }

    for (int i = 0; i < n + n; i++)
    {
        if (i == 0)
        {
            cout << v2[i];
        }
        else
        {
            cout << " " << v2[i];
        }
        
    }
    return 0;
}