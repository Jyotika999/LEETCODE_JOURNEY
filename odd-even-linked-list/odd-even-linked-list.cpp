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
    
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL or head->next==NULL)
            return head;
       // odd indexed followed up by even indexed
       ListNode * odd = head;
       ListNode * even = head->next;
       ListNode * temp = head->next;
        
        while(even->next!=NULL and odd->next!=NULL)
        {
             odd->next = odd->next->next;
            even->next = even->next->next;
            if(odd->next != NULL) odd = odd->next;
            if(even->next != NULL) even = even->next;
        }
        
       odd->next = temp;
        
        return head; 
        
        
    }
};