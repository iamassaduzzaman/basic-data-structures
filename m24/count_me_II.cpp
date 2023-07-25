#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int val = INT_MIN;
        int cnt = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if(mp[x] >= cnt)
            {
                if(mp[x] > cnt)
                {
                    val = x;
                    cnt = mp[x];
                }
                else
                {
                    val = max(val, x);
                    cnt = mp[x];
                }
            }
        }

        cout << val << " " << cnt << endl;
    }
    return 0;
}