#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    bool same = false;
    for (int i = 0; i < n; i++)
    {
        // if (find(a.begin(), a.end() + i - 1, a[i]) != a.end())
        //     count++;
        // if (find(a.begin() + i + 1, a.end(), a[i]) != a.end())
        //     count++;

        int l1 = 0, r1 = i - 1, l2 = i + 1, r2 = n - 1;
        while (l1 <= r1)
        {
            int middle = (l1 + r1) / 2;
            if (a[i] == a[middle])
            {
                same = true;
                break;
            }

            if (a[i] > a[middle])
            {
                l1 = middle + 1;
            }
            else
            {
                r1 = middle - 1;
            }
        }

        while (l2 <= r2)
        {
            int middle = (l2 + r2) / 2;
            if (a[i] == a[middle])
            {
                same = true;
                break;
            }

            if (a[i] > a[middle])
            {
                l2 = middle + 1;
            }
            else
            {
                r2 = middle - 1;
            }
        }
    }

    if (same == true)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
