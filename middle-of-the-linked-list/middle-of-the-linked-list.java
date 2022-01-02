/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode list) {
               ListNode firstNode = list;
				ListNode secondNode = list;
				while(firstNode!=null && firstNode.next != null)
                {firstNode = firstNode.next.next;
					secondNode = secondNode.next;
					
				}
				return secondNode;
    }
}