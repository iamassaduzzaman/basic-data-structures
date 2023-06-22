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

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *nod = new Node(val);
    if (head == NULL)
    {
        head = nod;
        tail = nod;
        return;
    }
    nod->next = head;
    head->prev = nod;
    head = nod;
}

void insertAtPosition(Node *&head, int val, int p)
{
    Node *nod = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= p - 1; i++)
    {
        tmp = tmp->next;
    }
    nod->next = tmp->next;
    tmp->next = nod;
    tmp->next->prev = nod;
    nod->prev = tmp;
}
int size(Node *head)
{
    int c = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }

    return c;
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

void printReverse(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        return;
    }

    printReverse(tmp->next);
    cout << tmp->val << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int p, val;
        cin >> p >> val;
        if (p == 0)
        {
            insertAtHead(head, tail, val);
            printNormal(head);
            cout << endl;
            printReverse(head);
            cout << endl;
        }
        else if (p == size(head))
        {
            insertAtTail(head, tail, val);
            printNormal(head);
            cout << endl;
            printReverse(head);
            cout << endl;
        }
        else if (p < size(head))
        {
            insertAtPosition(head, val, p);
            printNormal(head);
            cout << endl;
            printReverse(head);
            cout << endl;
        }
        else
        {
            cout << "Invalid\n";
        }
    }

    return 0;
}