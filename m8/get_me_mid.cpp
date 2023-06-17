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

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *node = new Node(val);
    if (head == NULL)
    {
        head = node;
        tail = node;
        return;
    }
    tail->next = node;
    tail = node;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void printMiddle(Node *head)
{
    int sz = size(head);
    Node *tmp = head;
    if (sz % 2 == 0)
    {
        for (int i = 1; i <= (sz / 2) - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val;
    }
    else
    {
        for (int i = 1; i <= (sz / 2); i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val;
    }
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
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    printMiddle(head);

    return 0;
}