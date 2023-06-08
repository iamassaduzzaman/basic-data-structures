#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--)
    {
        int x;
        cin >> x;
        bool found = false;

        // binary search
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (a[mid_index] == x)
            {
                found = true;
            }

            if (a[mid_index] < x)
            {
                l = mid_index + 1;
            }
            else
            {
                r = mid_index - 1;
            }
        }

        if (found == false)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
    return 0;
}