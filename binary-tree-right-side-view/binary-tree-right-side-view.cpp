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
    vector<int> rightSideView(TreeNode* root) {
        
        
        vector<int>Ans;
        
        if(root==NULL)
            return Ans;
        
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            
            for(int i=1;i<=n;i++)
            {
                    TreeNode* cur = q.front();
                    q.pop();
                    if(i==n)
                    {
                        Ans.push_back(cur->val);
                    }

                    if(cur->left!=NULL)
                    {
                        q.push(cur->left);
                    }
                    if(cur->right!=NULL)
                    {
                        q.push(cur->right);
                    }
            }
           
            
        }
        
        return Ans;
        
        
    }
};