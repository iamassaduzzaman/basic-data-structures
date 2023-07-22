// balanced binary tree
// sorted
// insert
// remove duplicate
// searching 
// O(logN)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n; cin >> n;
    while(n--)
    {
        int x; cin >> x;
        s.insert(x); // O(logN)
    }

    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    cout << s.count(5) << endl; // if it finds the value then return 1 otherwise 0

    return 0;
}