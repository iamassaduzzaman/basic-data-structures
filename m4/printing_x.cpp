#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && ((i < n / 2) || (i > n / 2)))
            {
                cout << "\\";
            }
            else if (i + j == n - 1 && ((i < n / 2) || (i > n / 2)))
            {
                cout << "/";
            }
            else if (i == j)
            {
                cout << "X";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
