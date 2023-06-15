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

void insertNode(Node *&head, int v)
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

int main()
{
    Node *head = NULL;
    int count = 0;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        count++;
        insertNode(head, val);
    }

    cout << count;
    return 0;
}