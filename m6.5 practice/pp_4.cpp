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

void insertAtTail(Node* &head, int v)
{
    Node* newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// print node
void printNode(Node* head)
{
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << tmp->val << endl;
}

void insertAtPosition(Node* &head, int p, int v)
{
    Node* node = new Node(v);

    if (p == 0)
    {
        node->next = head;
        head = node;
        printNode(head);
        return;
    }

    Node* c = head;
    int count = 0;
    while(c!= NULL)
    {
        c = c->next;
        count++;
    }

    if (p  <= count)
    {
        if (p == count)
        {
            insertAtTail(head, v);
            printNode(head);
        }
        else
        {
            Node* temp = head;
            for (int i = 0; i < p-1; i++)
            {
                temp = temp->next;
            }
            node->next = temp->next;
            temp->next = node;
            printNode(head);
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }


}



int main()
{

    Node* head = NULL; 
    while(true)
    {
        int v;
        cin >> v;
        if (v == - 1)
        {
            break;
        }
        insertAtTail(head, v);
    }

    int q; cin >> q;
    while(q--)
    {
        int idx, val;
        cin >> idx >> val;
        insertAtPosition(head, idx, val);
    }
    
    return 0;
}