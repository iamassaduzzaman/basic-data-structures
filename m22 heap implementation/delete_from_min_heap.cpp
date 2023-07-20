#include <bits/stdc++.h>
using namespace std;

void insertHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int curIdx = v.size() - 1;
    while (curIdx != 0)
    {
        int parentIdx = (curIdx - 1) / 2;
        if (v[parentIdx] > v[curIdx])
        {
            swap(v[parentIdx], v[curIdx]);
        }
        else
        {
            break;
        }
        curIdx = parentIdx;
    }
}

// delete from max heap
void deleteHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int leftIdx = cur * 2 + 1;
        int rightIdx = cur * 2 + 1;
        int lastIdx = v.size() - 1;
        if (leftIdx <= lastIdx && rightIdx <= lastIdx)
        {
            // duitai ache
            if (v[leftIdx] <= v[rightIdx] && v[leftIdx] < v[cur])
            {
                swap(v[leftIdx], v[cur]);
                cur = leftIdx;
            }
            else if (v[rightIdx] <= v[leftIdx] && v[rightIdx] < v[cur])
            {
                swap(v[rightIdx], v[cur]);
                cur = rightIdx;
            }
            else
            {
                break;
            }
        }
        else if (leftIdx <= lastIdx)
        {
            // left ase
            if (v[leftIdx] < v[cur])
            {
                swap(v[leftIdx], v[cur]);
                cur = leftIdx;
            }
            else
            {
                break;
            }
        }
        else if (rightIdx <= lastIdx)
        {
            // right ase
            if (v[rightIdx] < v[cur])
            {
                swap(v[rightIdx], v[cur]);
                cur = rightIdx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void printHeap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertHeap(v, x);
    }
    printHeap(v);
    deleteHeap(v);
    printHeap(v);

    return 0;
}