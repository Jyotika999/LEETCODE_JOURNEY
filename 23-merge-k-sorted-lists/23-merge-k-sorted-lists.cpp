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
    
    ListNode * merge(ListNode * l1, ListNode * l2)
    {
        
        if(l1==NULL and l2==NULL)
            return NULL;
        
        if(l1!=NULL and l2==NULL)
            return l1;
        
        if(l2!=NULL and l1==NULL)
            return l2;
        
        if(l1->val < l2->val)
        {
            l1->next = merge(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = merge(l1, l2->next);
            return l2;
        }
        
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int total_lists = lists.size();
        
        if(total_lists==0)
            return NULL;
        for(int i=1;i<total_lists;i++)
        {
            lists[0]=merge(lists[0], lists[i]);
        }
        return lists[0];
        
    }
};