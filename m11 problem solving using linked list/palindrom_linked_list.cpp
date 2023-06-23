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

    void reverse(ListNode* &head, ListNode* cur)
    {
        if(cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    
    bool isPalindrome(ListNode* head) {
         ListNode* nHead = NULL;
         ListNode* nTail = NULL;
         ListNode* tmp = head;
         while(tmp != NULL)
         {
            nList(nHead, nTail, tmp->val);
            tmp = tmp->next;
         }
        
         reverse(nHead, nHead);
         tmp = head;
         ListNode *tmp1 = nHead;
         while(tmp != NULL)
         {
            if(tmp->val != tmp1->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp1 = tmp1->next;
         }


         return true;
    }
};