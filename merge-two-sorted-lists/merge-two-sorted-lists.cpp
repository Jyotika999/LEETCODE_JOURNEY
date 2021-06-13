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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        
          
    ListNode * head = NULL;
    
    if(head1==NULL)
    return head2;
    
    if(head2==NULL)
    return head1;
    
    
    if(head1->val <= head2->val)
    {
        head = head1;
        head->next = mergeTwoLists(head1->next, head2 );
        //return head1;
    }
    else
    {
        head = head2;
        head->next = mergeTwoLists(head1, head2->next);
    }
    return head;
    }
};