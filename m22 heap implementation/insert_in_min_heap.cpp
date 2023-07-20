#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
        int curIndex = v.size() - 1;
        while(curIndex != 0)
        {
            int parentIndex = (curIndex - 1)/ 2;
            if(v[parentIndex] > v[curIndex])
            {
                swap(v[parentIndex], v[curIndex]);
            }
            else
            {
                break;
            }

            curIndex = parentIndex; 
        }
    }

    for(int val: v)
    {
        cout << val << " ";
    }
    return 0;
}