#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin >> n1;
    vector<int> v(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> v[i];
    }

    int n2;
    cin >> n2;
    vector<int> v2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> v2[i];
    }

    int idx;
    cin >> idx;

    v.insert(v.begin() + idx, v2.begin(), v2.end());
    for (int e : v)
    {
        cout << e << " ";
    }

    return 0;
}