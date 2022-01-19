/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode * fast = head;
        ListNode * slow = head;
        bool cycle=0;
        
        while(fast!=NULL and fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(slow==fast)
            {
              cycle=1;
                break;
            }
        }
        
        if(cycle==1)
        {
                slow=head;
                
                while(slow!=fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                    if(slow==fast)
                        return slow;
                }
            return slow;
                
        }
        return NULL;
        
    }
};