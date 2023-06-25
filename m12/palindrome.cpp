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


void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
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

    Node *nHead1 = NULL;
    Node *nTail1 = NULL;
    Node *tmp = head;
    while (tmp!= NULL)
    {
        insertAtTail(nHead1, nTail1, tmp->val);
        tmp = tmp->next;
    }
    
    reverse(nHead1, nHead1);
    Node *tmp1 = nHead1;
    tmp = head;
    int flag = 0;
    while (tmp->next != NULL)
    {
        if (tmp->val != tmp1->val)
        {
          flag = 1;
          break;
        } 
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }

    if(flag == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}