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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    // last node
    tmp->next = newNode;
}

// print the linked list
void print_linked_list(Node *head)
{
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// insert a node at position
void insert_at_position(Node *head, int p, int v)
{
    Node *newNode = new Node(v);

    Node *temp = head; // ??
    for (int i = 1; i <= p - 1; i++)
    {
        temp = temp->next; // ??
    }

    newNode->next = temp->next;
    temp->next = newNode; // ??
    cout << "\n\nInserted at position\n\n";
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at Position" << endl;
        cout << "Option 4: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int p, v;
            cout << "Insert position:";
            cin >> p;
            cout << "Insert value: ";
            cin >> v;
            insert_at_position(head, p, v);
        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}