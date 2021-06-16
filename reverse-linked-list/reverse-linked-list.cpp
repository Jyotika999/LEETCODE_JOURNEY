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
    
    ListNode * left = NULL;
    int cnt=0;
    
    void reverse_recursively(ListNode * right, int floor)
    {
        if(right==NULL)
            return ;
        
        reverse_recursively(right->next, floor+1);
        
        if(floor>=cnt/2)
        {
            // do swapping of data 
            int temp = right->val;
            right->val = left->val;
            left->val = temp;
        }
        
        left = left->next;
        
    }
    
    
    
    ListNode* reverseList(ListNode* head) {
        
        left = head;
        ListNode * right = head;
        ListNode * temp=head;
        
        while(temp!=NULL)
        {
            temp = temp->next;
            cnt++;
        }
        
        reverse_recursively(right, 0);
        return head;
    }
};