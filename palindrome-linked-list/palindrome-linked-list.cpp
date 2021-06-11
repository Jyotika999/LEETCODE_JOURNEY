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
    
    ListNode * left ;
    
    bool checkpalin(ListNode * right)
    {
        if(right == NULL)
            return true;
        
        bool res = checkpalin(right->next);
        
        if(res==false)
        {
            return false;
        }
        else if(right->val != left->val)
        {
            return false;
        }
        else
        {
            left = left->next;
            return true;
        }
    }
    
    
    
    bool isPalindrome(ListNode* head) {
        
        left = head;
        ListNode * right = head;
        
        if( checkpalin(right))
            return true;
        else
            return false;
    }
};