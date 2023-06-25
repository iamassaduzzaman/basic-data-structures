// using singly linked list

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
    Node *nNode = new Node(val);
    if (head == NULL)
    {
        head = nNode;
        tail = nNode;
        return;
    }
    tail->next = nNode;
    tail = nNode;
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

void removeDuplicates(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            tmp->next = tmp->next->next;
        }

        if (tmp->next == NULL)
            break;
        else if (tmp->val != tmp->next->val)
        {
            tmp = tmp->next;
        }
    }
    printNormal(head);
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

    removeDuplicates(head);

    return 0;
}