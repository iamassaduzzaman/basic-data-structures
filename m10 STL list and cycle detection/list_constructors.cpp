
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list <int> myList;
    // list<int> myList = {10, 20, 30};
    // list <int> myList(5, 11);

    // list <int> myList2 = {5, 10 , 15};
    // list <int> myList(myList2);

    // vector<int> v = {10 , 20 , 30};
    // list<int> myList(v.begin(), v.end());

    int a[5] = {1, 2, 3, 4, 5};
    list<int> myList(a, a + 5);

    // for(auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}