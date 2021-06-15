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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode * prev = new ListNode(-1);
        ListNode * dummyhead = prev;
        prev->next = head;
        
   
        
        while(prev->next!=NULL and prev->next->next!=NULL)
        {
            
            ListNode * cur = prev->next;
            ListNode * fwd = cur->next;
            ListNode * tmp = fwd->next;
            prev->next = fwd;
            fwd->next = cur;
            cur->next = tmp;
            
            prev = cur;
        }
        
        return dummyhead->next;
        
        
    }
};