void nList(ListNode* &head, ListNode* &tail, int val)
{
    ListNode* nNode = new ListNode(val);
    if(head == NULL)
    {
        head = nNode;
        tail = nNode;
        return;
    }
    tail->next = nNode;
    tail = nNode;
}

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
    ListNode* mergeNodes(ListNode* head) {
      if (head == NULL) return head;
      int sz = size(head);
      ListNode* nHead = NULL;
      ListNode* nTail = NULL;
      ListNode* tmp = head;
      int sum = 0;
      for(int i = 1; i <= sz; i++)
      {   
          if(tmp->val == 0 && i != 1)
          {
            nList(nHead, nTail, sum);
            sum = 0;
          }
          sum += tmp->val;
          tmp = tmp->next;
      }
      return nHead;
    }
};