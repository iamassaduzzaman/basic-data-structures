#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *nod = new Node(val);
    if (head == NULL)
    {
        head = nod;
        tail = nod;
        return;
    }
    tail->next = nod;
    nod->prev = tail;
    tail = nod;
}

void printNormal(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        return;
    }

    cout << tmp->val << " ";
    printNormal(tmp->next);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, tail, val);
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    printNormal(head);
    return 0;
}