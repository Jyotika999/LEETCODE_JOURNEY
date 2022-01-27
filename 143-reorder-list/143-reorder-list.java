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
    public ListNode reverse(ListNode node)
	{
		ListNode value = null;
		while(node != null)
		{
			ListNode temp = node.next;
			node.next = value;
			value = node;
			node = temp;
		}
		return value;
	}
	public ListNode getMiddleElementOfLinkedList (ListNode list) {
	    // add your logic here
		ListNode slow = list;
		ListNode fast = list;
		while (true) {
			if (fast.next == null || fast.next.next == null) {
				break;
			}
			slow = slow.next;
			fast = fast.next.next;
		}
		return slow;
	
	}
    public void reorderList(ListNode head) {
        
 
		// add your logic here
		ListNode first = head;
		ListNode second = getMiddleElementOfLinkedList(first);
		
		ListNode start = second;
		ListNode rfirst = reverse(start);
		second.next = null;
		
		ListNode dnode = head;
		ListNode temp1;
		ListNode temp2;
		while(dnode!=null && rfirst!=null)
		{
			temp1 = dnode.next;
			temp2 = rfirst.next;
			dnode.next = rfirst;
			rfirst.next = temp1;
			dnode = temp1;
			rfirst = temp2;
		}
		
		// return head;
		
	}
	
}