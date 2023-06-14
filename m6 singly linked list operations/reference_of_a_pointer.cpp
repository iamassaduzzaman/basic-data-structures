#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    // cout << p << endl;
    // *p = 20;
    cout << &p << endl;
}

int main()
{
    int val = 10;

    int *ptr = &val;
    // ptr address: f0

    // fun(ptr);
    cout << &val << endl; // ??
    cout << &ptr << endl; // ??
    cout << ptr << endl; // ??
    // cout << val << endl;
    return 0;
}

/*
ptr
value: 08
address: 08

p
value: 08
address: f0

*/