/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode deleteNode(TreeNode root, int key) {
          
        if(root == null) {
            return null;
        }
        
        TreeNode curr = root;
        TreeNode prev = null;
        
        while(curr != null && curr.val != key) {
            prev = curr;
            if(curr.val > key) {
                curr = curr.left;
            }else {
                curr = curr.right;
            }
        }
        
        if(curr == null) {
            return root;
        }
        
        // System.out.println(curr.val);
        // System.out.println(prev.val);
        
        if(curr.left == null && curr.right == null) {
            if(prev != null) {
                if(prev.left == curr) {
                    prev.left = curr.left;
                }else if(prev.right == curr) {
                    prev.right = curr.right;
                }
            }else {
                return null;
            }
        }
        
        if(curr.left == null) {           
            if(prev != null) {
                if(prev.left == curr) {
                    prev.left = curr.right;
                }else if(prev.right == curr) {
                    prev.right = curr.right;
                }                
            }else {
                root = curr.right;
            }
        }
        
        else if(curr.right == null) {
           // System.out.println("In left section");
            if(prev != null) {
                if(prev.left == curr) {
                    prev.left = curr.left;
                }else if(prev.right == curr) {
                    prev.right = curr.left;
                }   
            }else {
                root = curr.left;
            }
        }
        else  {
               
                TreeNode newCurr = curr.right;
                prev = curr;

                while(newCurr.left != null) {
                    prev = newCurr;
                    newCurr = newCurr.left;
                }        

                
            

                curr.val = newCurr.val;
            
               
            
                if(newCurr == prev.left) {
                    prev.left = newCurr.right;
                }else {
                    prev.right = newCurr.right;
                }
               
        }
        
        
        return root;
    }
}