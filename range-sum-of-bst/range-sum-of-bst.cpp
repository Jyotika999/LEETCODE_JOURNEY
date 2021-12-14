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
    
    void solve(TreeNode * root, int low, int high)
    {
        if(root==NULL)
            return;
        
        if(root->val>=low and root->val<=high)
        {
            cout<<root->val<<"\n";
            sum+=root->val;
        }
        solve(root->left, low, high);
        solve(root->right, low, high);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        sum=0;
        
        if(root==NULL)
            return 0;
        
        solve(root, low, high);
//         solve(root->left, low, high);
//         solve(root->right, low, high);
        
        return sum;
    }
};