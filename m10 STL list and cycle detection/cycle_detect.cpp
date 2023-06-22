
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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    // b->next = a;

    Node *slow = head;
    Node *fast = head;
    int flag = 0;
    while (slow != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";
    return 0;
}