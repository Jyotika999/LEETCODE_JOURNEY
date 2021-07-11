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
    
    
    int dfs(TreeNode * root, string s)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL and root->right==NULL)
        {
            // leaf node 
            
            string temp = to_string(root->val);
            s+=temp;
            return stoi(s);
           
        }
        
        s+=to_string(root->val);
        return  (dfs(root->left,s)+dfs(root->right,s));
        
        
    }
    int sumNumbers(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        string s="";
        
        
        int sum = dfs(root, s);
        return sum;
        
    }
};