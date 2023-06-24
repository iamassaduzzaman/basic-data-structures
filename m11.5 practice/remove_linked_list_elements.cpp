
class Solution {
public:
    void nList(ListNode* &head, ListNode* &tail, int val)
    {
        ListNode* nNode = new ListNode(val);
        if (head == NULL)
        {
            head = nNode;
            tail = nNode;
            return;
        }
        tail->next = nNode;
        tail = nNode;
    }

    ListNode* removeElements(ListNode* head, int val)
    {
     if(head == NULL) return head;
     ListNode* nHead = NULL;
     ListNode* nTail = NULL;
     ListNode* tmp = head;
     while(tmp != NULL)
     {
         if(tmp->val != val)
         {
             nList(nHead, nTail, tmp->val);
         }
         tmp = tmp->next;
     }   
     return nHead;
    }
};















