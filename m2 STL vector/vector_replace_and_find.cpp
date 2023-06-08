#include <bits/stdc++.h>
using namespace std;

int main()
{
    // replace
    // vector <int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};
    // replace(v.begin(), v.end(), 2, 100);
    // for(int x:v)
    // {
    //     cout << x << " ";
    // }

    // find
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};

    //vector <int>:: iterator it =  find(v.begin(), v.end(), 1);
    auto it =  find(v.begin(), v.end(), 1);

    if (it == v.end()) cout << "not found";
    else cout << "found";
    return 0;
}