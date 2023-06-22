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

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->prev = cur->next;
    cur->next = NULL;
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

    reverse(head, head);
    printNormal(head);

    return 0;
}