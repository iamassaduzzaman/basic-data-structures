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

void insetNode(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void duplicate(Node *head)
{
    Node *temp = head;
    int a[100] = {0};
    while (temp->next != NULL)
    {
        a[temp->val]++;
        temp = temp->next;
    }
    a[temp->val]++;

    int flag = 0;
    for (int i = 0; i < 100; i++)
    {
        if (a[i] > 1)
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }

        insetNode(head, v);
    }

    duplicate(head);

    return 0;
}