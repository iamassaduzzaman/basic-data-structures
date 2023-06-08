#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {100, 101, 102, 103};

    // v.insert(v.begin()+2, 7); insert 1 value

    v.insert(v.begin() + 1, v2.begin(), v2.end()); // inset a array/vector

    for (int e : v)
    {
        cout << e << " ";
    }

    return 0;
}