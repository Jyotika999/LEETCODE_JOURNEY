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
    int getDecimalValue(ListNode* head) {
        
        string s = "";
        ListNode * tmp = head;
        
        while(tmp!=NULL)
        {
            s+= (tmp->val)+'0';
            
            tmp = tmp->next;
        }
        
        
        int val=0;
        int n = s.length();
        
        for(int i=n-1;i>=0;i--)
        {
            val+= pow(2,n-i-1)*(s[i]-'0');
        }
        return val;
        
    }
};