#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        v[(int)s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] != 0)
        {
            char x = i + 'a';
            cout << x << " "
                 << ":"
                 << " " << v[i] << endl;
        }
    }

    return 0;
}