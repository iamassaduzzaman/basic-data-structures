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

// insert at tail
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

// size of the linked list
void maxValue(Node *head)
{
    Node *tmp = head;
    int max = head->val;
    while (tmp != NULL)
    {
        if (max < tmp->val)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max;
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
    maxValue(head1);

    return 0;
}