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
    // maxval= abhi tk ki maximum value
    // minval= abhi tk ki minimum value
    // maxi=glloabal differrecne value
    
    int maxi=0;
    
    void maxdif(TreeNode*root, int maxval, int minval)
    {
        if(root==NULL)
            return ;
        
       
        maxval=max(maxval, root->val);
        minval=min(minval, root->val);
        maxi=max (maxi, (maxval- minval));
        
        maxdif(root->left, maxval, minval);
        maxdif(root->right, maxval, minval);
    }
    int maxAncestorDiff(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        maxi=0;
        maxdif(root, root->val, root->val);
        
        return maxi;
        
        
    }
};



// O(V+E)
    
// dfs(8)
//     dfs(3)+dfs(10)
    