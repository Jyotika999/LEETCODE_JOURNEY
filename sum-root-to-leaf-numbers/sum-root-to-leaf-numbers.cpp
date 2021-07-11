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
    
    int dfs(TreeNode * root, int sum)
    {
        if(root==NULL)
            return 0;
        
        if(root->left==NULL and root->right==NULL)
        {
            // leaf node
            sum = sum*10 + root->val;
            return sum;
        }
        
        sum = sum *10 + root->val;
        return (dfs(root->left, sum)+ dfs(root->right, sum));
    }
    
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        return dfs(root, 0);
        
    }
};