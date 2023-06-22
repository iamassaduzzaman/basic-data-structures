
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

    vector<int> v(size(head));
    Node *tmp = head;
    for (int i = 0; tmp != NULL; i++)
    {
        v[i] = tmp->val;
        tmp = tmp->next;
    }
    reverse(head, head);

    int flag = 0;
    int j = 0;
    Node *tmp1 = head;
    while (tmp1 != NULL)
    {
        if (v[j] != tmp1->val)
        {
            flag = 1;
        }
        j++;
        tmp1 = tmp1->next;
    }

    if (flag == 0)
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}