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

void insertAtTail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// middle print
void middlePrint(Node *head, int c)
{
    if (c % 2 == 0)
    {
        Node *temp = head;
        for (int i = 1; i < c / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < (c / 2) + 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val;
    }
}

int main()
{
    Node *head = NULL;
    int count = 0;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        count++;
        insertAtTail(head, v);
    }

    middlePrint(head, count);
    return 0;
}