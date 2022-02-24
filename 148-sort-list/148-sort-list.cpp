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
    
    
    ListNode * middle_of_list(ListNode * head, ListNode * tail)
    {
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast!=tail and fast->next!=tail)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode * merge_lists(ListNode * l1, ListNode * l2)
    {
        if(l1==NULL and l2==NULL)
            return l1;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
        if(l1->val < l2->val)
        {
            l1->next = merge_lists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = merge_lists(l1, l2->next);
            return l2;
        }
        return NULL;
    }
    ListNode * mergesort(ListNode * head, ListNode * tail)
    {
        if(head==tail)
        {
            ListNode * nn = new ListNode(head->val);
            return nn;
        }
        
        ListNode * mid = middle_of_list(head, tail);
        
        ListNode * l1 = mergesort(head, mid);
        ListNode * l2 = mergesort(mid->next, tail);
        return merge_lists(l1, l2);
        
        
        
    }
    ListNode* sortList(ListNode* head) {
    
        // applying merge sort
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode * tail = head;
        while(tail->next !=NULL)
        {
            if(tail->next==NULL)
                break;
            tail  =  tail->next;
        }
        // applying mergesort on the given linkedlist
        return mergesort(head, tail);
        // return NULL;
        
        
        
    }
};