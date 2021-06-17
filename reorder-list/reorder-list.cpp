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
    int sz=0;
    
    void func(ListNode * right, int floor)
    {
        if(right==NULL)
        {
            return ;
        }
        
        // recursive stack filling
        func(right->next, floor+1);
        
        if(floor>sz/2)
        {
            ListNode * temp = left->next;
            left->next = right;
            right->next = temp;
            left = temp;
        }
        
        if(floor==sz/2)
        {
            left= right;
            left->next = NULL;
        }
        
        
    }
    
    
    void reorderList(ListNode* head) {
        
        left = head;
        ListNode * right = head;
        
        ListNode * tmp = head;
        while(tmp!=NULL)
        {
            sz++;
            tmp = tmp->next;
        }
        
        func(right, 0);
        return;
        
        
    }
};