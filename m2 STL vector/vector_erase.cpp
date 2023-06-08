#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // v.erase(v.begin() + 1); erase the exact index

    // v.erase(v.begin() + 1, v.begin() + 4); erase a range of value
    v.erase(v.begin() + 1, v.end() - 1);

    for (int e : v)
    {
        cout << e << " ";
    }

    return 0;
}