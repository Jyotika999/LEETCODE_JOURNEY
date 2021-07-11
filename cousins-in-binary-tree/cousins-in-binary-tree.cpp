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
    
    int level[105];
    int parent[105];
    void bfs(TreeNode * root)
    {
        queue<TreeNode*>q;
        q.push(root);
        parent[root->val]=-1;
        level[root->val]=0;
        
        while(!q.empty())
        {
            TreeNode * cur = q.front();
            q.pop();
            
            if(cur->left!=NULL)
            {
                level[cur->left->val] = level[cur->val]+1;
                q.push(cur->left);
                parent[cur->left->val]= cur->val;
            }
            if(cur->right!=NULL)
            {
                level[cur->right->val] = level[cur->val]+1;
                q.push(cur->right);
                parent[cur->right->val]= cur->val;
            }
            
        }
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(root==NULL)
            return false;
        bfs(root);
     
        if(level[x]==level[y] and parent[x]!=parent[y])
            return true;
        else
            return false;
        
    }
};