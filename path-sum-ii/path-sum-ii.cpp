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
    
    vector<vector<int>>ans;
    
    void solve(vector<int>temp, TreeNode*root, int sum, int target)
    {
        if(root==NULL)
        {
            return ;
        }
        
        if(root->left==NULL and root->right==NULL)
        {
            // leaf node
            sum = sum + root->val;
            if(sum==target)
            {
                temp.push_back(root->val);
                ans.push_back(temp);
            }
            
        }
        
        if(root->left!=NULL)
        {
            sum = sum + root->val;
            temp.push_back(root->val);
            solve(temp, root->left, sum, target);
            temp.pop_back();
            sum = sum - root->val;
        }
        
        if(root->right!=NULL)
        {
            sum =  sum + root->val;
            temp.push_back(root->val);
            solve(temp, root->right, sum, target);
            temp.pop_back();
            sum = sum - root->val;
        }
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    
        vector<int>temp;
        solve(temp, root, 0, targetSum);
        
        return ans;
        
    }
};