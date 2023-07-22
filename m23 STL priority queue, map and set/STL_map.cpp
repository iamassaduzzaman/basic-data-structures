#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    // mp.insert({"Sakib Al Hasan", 75});
    // mp.insert({"Tamim Iqbal", 28});
    // mp.insert({"Liton Das", 2});
    
    mp["Sakib Al Hasan"] = 75;
    mp["Tamim Iqbal"] = 28;
    mp["Mashrafi"] = 2;

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    if(mp.count("Liton"))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}