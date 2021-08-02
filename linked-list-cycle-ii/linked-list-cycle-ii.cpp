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
        
        if(head == NULL)
            return NULL;
        
        ListNode * fast = head;
        ListNode * slow = head;
        int flag=0;
        
        while(fast!=NULL and fast->next!=NULL)
        {
            fast = fast->next->next ;
            slow = slow->next;
            
            if(fast == slow)
            {
                flag=1;   // cycle detected
                break;
            }
        }
        
        
        if(flag==1)
        {
            fast = head;
            while(fast!=slow)
            {
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
        else
        {
            return NULL;
        }
        
        return NULL;
    }
};