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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    // finding middle and breaking previous links , so that this list becomes a separate list 
    ListNode * middle(ListNode * head)
    {
        ListNode * slow = head;
        ListNode * fast = head;
        ListNode * prev = head;
        
        while(fast!=NULL and fast->next!=NULL)
        {
            prev = slow;
            fast= fast->next->next;
            slow= slow->next;
        }
        
        if(prev!=NULL)
            prev->next = NULL;
        
        
        return slow;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        
        if(head->next==NULL)
            return new TreeNode(head->val);
        
        ListNode * mid = middle(head);
        
        TreeNode * node = new TreeNode(mid->val);
        
        node->left = sortedListToBST(head);
        node->right = sortedListToBST(mid->next);
        
        return node;
   
    }
};