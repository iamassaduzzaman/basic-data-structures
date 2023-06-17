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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_max_min(Node *head)
{
    Node *tmp = head;
    int max = head->val;
    int min = head->val;
    while (tmp != NULL)
    {
        if (max < tmp->val)
        {
            max = tmp->val;
        }

        if (min > tmp->val)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max << " " << min;
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
            break;
        insert_tail(head, tail, val);
    }
    print_max_min(head);
    return 0;
}
