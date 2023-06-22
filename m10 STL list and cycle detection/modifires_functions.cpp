
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70};
    list<int> l2 = {5, 6, 7};
    vector<int> v = {1, 2, 3};

    // list<int> l3 = l;
    // l.push_back(99);
    // l.push_front(69);
    // l.pop_back();
    // l.pop_front();
    // l.insert(next(l.begin(), 2), 66);
    // l.erase(next(l.begin(), 2));
    // l.insert(next(l.begin(), 3), v.begin(), v.end());
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));
    // replace(l.begin(), l.end(), 30, 100);


    // for (int val : l)
    // {
    //     cout << val << " ";
    // }

    auto it = find(l.begin(), l.end(), 500);
    if (it == l.end())
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Found\n";
    }
    return 0;
}