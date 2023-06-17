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

void compare(Node *head1, Node *head2)
{
    int flag = 0;
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = 1;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head2, tail2, val);
    }

    if (size(head1) == size(head2))
    {
        compare(head1, head2);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}