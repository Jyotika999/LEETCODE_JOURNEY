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
    
    void dfs(TreeNode * root, int target, vector<vector<int>>&path, vector<int>curpath)
    {
    
        // NULL node 
        if(root==NULL)
            return;
        
        target -= root->val;
        curpath.push_back(root->val);
        // [5, 4, 11, ]
        // leaf node
            // if cursum = 0
        
        if(root->left==NULL and root->right==NULL)
        {
            if(target==0)
            {
                path.push_back(curpath);
            }
        }
        
        dfs(root->left, target, path, curpath);
        dfs(root->right, target, path, curpath);
        
        
        
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        
        vector<vector<int>>allpaths;
        if(root==NULL)
            return allpaths;
        vector<int>curpath;
        dfs(root, targetSum, allpaths, curpath);
        return allpaths;
    }
};