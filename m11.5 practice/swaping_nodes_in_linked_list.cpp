int size(ListNode* head)
{
    ListNode* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
    if (head == NULL) return head;
    int sz = size(head);
    int val1, val2;
    ListNode* tmp = head;
    for (int i = 1; i <= sz; i++)
    {
        if(i == k)
        {
            val1 = tmp->val;
        }

        if (i == sz-k+1)
        {
            val2 = tmp->val;
        }
        tmp = tmp->next;
    }

    // swaping
    tmp = head;
    for (int i = 1; i <= sz; i++)
    {
        if(i == k)
        {
            tmp->val = val2;
        }

        if (i == sz-k+1)
        {
            tmp->val = val1;
        }
        tmp = tmp->next;
    }


    
    return head;
    }
};