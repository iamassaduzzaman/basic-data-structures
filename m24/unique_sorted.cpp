#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        set<int> s;
        int k; cin >> k;
        while(k--)
        {
            int v; cin >> v;
            s.insert(v);
        }

        vector<int> v;
        for(auto it = s.begin(); it != s.end(); it++)
        {
            v.push_back(*it);
        }
        
        
        for(int l = v.size() - 1; l >= 0; l--)
        {
            cout << v[l] << " ";
        }
        cout << endl;
    }
    return 0;
}