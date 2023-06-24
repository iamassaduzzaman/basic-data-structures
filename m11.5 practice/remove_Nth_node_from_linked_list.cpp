
class Solution {
public:
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int sz = size(head);
    if(head == NULL) return head;
    ListNode* nHead = NULL;
    ListNode* nTail = NULL;
    ListNode* tmp = head;
    for(int i = 1; i <= sz; i++)
    {
        
        if (i != (sz-n+1))
        {
          nList(nHead, nTail, tmp->val);
        }
         tmp = tmp->next;
    }
     return nHead;
    }
};