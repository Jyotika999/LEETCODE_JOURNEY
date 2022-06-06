/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    // method 3
    // let the linkedlist1 and linkedlist2 , travel a little more distances. 
    // m is the distance of linkedlist 1 to the intersection point
    // n is the distance of linkedlist 2 to the intersection point
    // x is the distance from intersection point to NULL
    
    // len1 = m+x + (n+x)
    // len2 = n+x + (m+x)
    
    // logic:
    // ptr1 is pointing to linkedlist1 ' head
    // ptr2 is pointing to linkedlist2'head
    
    // when either of ptr1 or ptr2 comes to NULL , then move that pointer to the head of other linkedlist, keep traversing both of the pointers till 
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode * ptr1 = headA;
        ListNode * ptr2 = headB;
        
        while(ptr1!=ptr2)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            
            if(ptr1==NULL and ptr2==NULL)
                return NULL;
            if(ptr1==NULL)
                ptr1=headB;
            if(ptr2==NULL)
                ptr2=headA;
        }
        return ptr1;
        
    }
};