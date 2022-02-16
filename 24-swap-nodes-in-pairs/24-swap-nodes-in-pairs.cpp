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
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode * aage_ki_list = swapPairs(head->next->next);
        ListNode * temp1 = head;
        ListNode * temp2 = head->next;
        temp2->next = temp1;
        temp1->next = aage_ki_list;
        return temp2;
        
        
        
    }
};