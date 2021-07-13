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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        
        if(root==NULL)
            return ans;
        
        queue<TreeNode*>q;
        q.push(root);
        int cur=0;
        // cur = 0, push direct 
        // cur = 1, push reverse
        
        while(!q.empty())
        {
            int n  = q.size();
            
            vector<int>temp;
            while(n)
            {
                TreeNode * cur = q.front();
                temp.push_back(cur->val);
                q.pop();
                
                if(cur->left!=NULL)
                {
                    q.push(cur->left);
                }
                 
                if(cur->right!=NULL)
                {
                    q.push(cur->right);
                }
                n--;
            }
            if(cur==0)
            {
                cur = 1;
                ans.push_back(temp);
            }
            else
            {
                cur = 0;
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};