#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50};

    // cout << l.front();
    // cout << l.back();

    cout << *next(l.begin(), 3);
    return 0;
}