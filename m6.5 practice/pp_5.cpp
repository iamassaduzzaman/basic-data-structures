#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, int v)
{
    Node *node = new Node(v);
    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}

void isAscending(Node *head, int sz)
{
    int a[sz];
    Node *tmp = head;
    int flag = 0, i;
    for (i = 0; tmp->next != NULL; i++)
    {
        a[i] = tmp->val;
        tmp = tmp->next;
    }
    a[i] = tmp->val;

    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (a[i] > a[j])
            {
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    Node *head = NULL;
    int count = 0;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        count++;
        insertAtTail(head, v);
    }

    isAscending(head, count);
    return 0;
}