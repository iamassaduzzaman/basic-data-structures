#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string s;
    Node *next;
    Node *prev;
    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, string s)
{
    Node *nNode = new Node(s);
    if (head == NULL)
    {
        head = nNode;
        tail = nNode;
        return;
    }
    tail->next = nNode;
    nNode->prev = tail;
    tail = nNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        insertAtTail(head, tail, s);
    }

    int q;
    cin >> q;
    cin.ignore();
    Node *tmp = head;
    for (int i = 0; i < q; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string s1, s2, s3;
        int j = 0;
        while (ss >> s1)
        {
            if (j == 0)
            {
                s2 = s1;
            }
            if (j == 1)
            {
                s3 = s1;
            }
            j++;
        }
        if (s2 == "visit")
        {
            Node *tmp1 = head;
            int flag = 0;
            while (tmp1 != NULL)
            {
                if (tmp1->s == s3)
                {
                    flag = 1;
                    break;
                }
                tmp1 = tmp1->next;
            }


            if (flag == 0)
            {
                cout << "Not Available\n";
            }
            else
            {
                tmp = head;
                while (tmp != NULL)
                {
                    if (tmp->s == s3)
                    {
                        cout << tmp->s << endl;
                        break;
                    }
                    tmp = tmp->next;
                }
            }


        }

        if (s2 == "next")
        {
            if (tmp->next == NULL)
            {
                cout << "Not Available\n";
            }
            else
            {
                cout << tmp->next->s << endl;
                tmp = tmp->next;
            }
        }

        if (s2 == "prev")
        {
            if (tmp->prev == NULL)
            {
                cout << "Not Available\n";
            }
            else
            {
                cout << tmp->prev->s << endl;
                tmp = tmp->prev;
            }
        }
    }

    return 0;
}
