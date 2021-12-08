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
       int sum=0;
    
    int dfs(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
     
        int left=0;
        int right=0;
        if(root->left!=NULL)
        {
            left= dfs(root->left);
        }
        if(root->right!=NULL)
        {
            right= dfs(root->right);
        }
        sum+=abs(left-right);
        return left+right+root->val;
    }
    
    int findTilt(TreeNode* root) {
        sum=0;
        dfs(root);
        return sum;
        
    }
};