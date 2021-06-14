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
    
    ListNode * find_middle_node( ListNode * head, ListNode * tail)
    {
        ListNode * fast = head;
        ListNode * slow = head;

        while(fast!=tail && fast->next!=tail)
        {
           
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    ListNode * merge_sorted_lists( ListNode * list1, ListNode * list2)
    {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        if(list1->val < list2->val)
        {
            list1->next = merge_sorted_lists( list1->next, list2);
            return list1;
        }
        else{
            list2->next = merge_sorted_lists( list1, list2->next);
            return list2;
        }
    }
    // void mergeSort(int arr[],int l,int r){
    //     if(l>=r){
    //         return;//returns recursively
    //     }
    //     int m =l+ (r-l)/2;
    //     mergeSort(arr,l,m);
    //     mergeSort(arr,m+1,r);
    //     merge(arr,l,m,r);
    // }

    ListNode * mergesort( ListNode * head, ListNode * tail)
    {
        
        // if there is only one node in the listnode
        if(head == tail)
        {
            ListNode * newnode = new ListNode(head->val);
            return newnode;
        }
            // finding the middle of the given linkedlist
        ListNode * middle = find_middle_node(head, tail);
       // return middle;
        // calling mergesort for the first half of the given linkedlist 
        ListNode * list1  = mergesort( head, middle);

        // calling mergesort for the second half of the given linkedlist 
         ListNode * list2 =  mergesort(middle->next, tail);

        // now merging the two given linkedlists , using the concept of merging two sorted linkedlist 
        ListNode * newlist = merge_sorted_lists(list1, list2);
        return newlist;

    }
    ListNode* sortList(ListNode* A) {

        //     MergeSort(arr[], l,  r)
        // If r > l
        //      1. Find the middle point to divide the array into two halves:  
        //              middle m = l+ (r-l)/2
        //      2. Call mergeSort for first half:   
        //              Call mergeSort(arr, l, m)
        //      3. Call mergeSort for second half:
        //              Call mergeSort(arr, m+1, r)
        //      4. Merge the two halves sorted in step 2 and 3:
        //              Call merge(arr, l, m, r)


        // head pointing to the head of the linkedlist
        // tail pointing to the tail of the linkedlist

        ListNode * head = A;
       
        if(head==NULL || head->next==NULL)
        return head;

         ListNode * tail = A->next;


        while(tail->next!=NULL)
        {
            tail = tail->next;
        }
        if(head==tail)
        return head;

         ListNode * middle = find_middle_node(head, tail);

     //   return middle;
         return mergesort(head, tail);

    }
};


