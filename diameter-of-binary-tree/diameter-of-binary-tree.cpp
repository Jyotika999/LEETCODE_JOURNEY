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
    
    
    int height(TreeNode * root)
    {
        if(root==NULL)
            return 0;
        
        return 1 + max(height(root->left) , height(root->right));
    }
    
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int lhs = diameterOfBinaryTree(root->left);
        int rhs = diameterOfBinaryTree(root->right);
        
        int d = height(root->left)+ height(root->right);
        
        return max(lhs, max(rhs, d));
    }
};