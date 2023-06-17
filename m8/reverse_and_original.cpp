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

void printReverse(Node *head)
{
    Node *tmp1 = head;
    if (tmp1 == NULL)
        return;
    printReverse(tmp1->next);
    cout << tmp1->val << " ";
}

void printOriginal(Node *head)
{
    Node *tmp2 = head;
    if (tmp2 == NULL)
        return;

    cout << tmp2->val << " ";
    printOriginal(tmp2->next);
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

    printReverse(head);
    cout << endl;
    printOriginal(head);

    return 0;
}