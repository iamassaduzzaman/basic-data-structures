#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);

        string word;
        stringstream ss(s);
        map<string, int> mp;
        int mx = INT_MIN;
        string s1;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                s1 = word;
                mx = mp[word];
            }
        }
        cout << s1 << " " << mx << endl;
    }
    return 0;
}


