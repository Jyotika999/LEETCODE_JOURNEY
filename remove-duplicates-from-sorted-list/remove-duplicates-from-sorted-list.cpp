/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      
        ListNode * cur = head;
        
        while(cur!=NULL && cur->next!=NULL)
        {
            // if current node is equal to the next node of the current node , we will return true in that case 
            if(cur->val == cur->next->val)
            {
                ListNode * temp = cur->next;
                cur->next = cur->next->next;
                delete(temp);
            }
            else
            {
                cur = cur->next;
            }
            
            
        }
        return head;
        
    }
};