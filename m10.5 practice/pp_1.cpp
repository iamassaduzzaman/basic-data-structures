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

// void printNormal(Node *head)
// {
//     Node *tmp = head;
//     if (tmp == NULL)
//     {
//         return;
//     }

//     cout << tmp->val << " ";
//     printNormal(tmp->next);
// }

// void printReverse(Node *head)
// {
//     Node *tmp = head;
//     if (tmp == NULL)
//     {
//         return;
//     }

//     printReverse(tmp->next);
//     cout << tmp->val << " ";
// }

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

void compare(Node *head, Node *head1)
{
    Node *tmp = head;
    Node *tmp1 = head1;
    int flag = 0;
    while (tmp != NULL)
    {
        if (tmp->val != tmp1->val)
        {
            flag = 1;
        }
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }

    if (flag == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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

    Node *head1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head1, tail2, val);
    }

    if (size(head) == size(head1))
    {
        compare(head, head1);
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}