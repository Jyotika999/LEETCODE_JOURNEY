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
    int depth[105];
    int parent[105];
    
    void bfs(TreeNode* node, int p, int d)
    {
        parent[node->val]=p;
        depth[node->val]=0;
        
        queue<pair<TreeNode*,int>>q;
        q.push({node,d});
        
        while(!q.empty())
        {
            auto cur = q.front().first;
            auto curd = q.front().second;
            q.pop();
            
            if(cur->left!=NULL)
            {
                parent[cur->left->val]=cur->val;
                depth[cur->left->val]=curd+1;
                q.push({cur->left, curd+1});
            }
            if(cur->right!=NULL)
            {
                parent[cur->right->val]=cur->val;
                depth[cur->right->val]=curd+1;
                q.push({cur->right, curd+1});
            }
        }
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        memset(depth, -1, sizeof(depth));
        memset(parent, -1, sizeof(parent));
        
        bfs(root, -1, 0);
        
        if((depth[x]==depth[y])and(parent[x]!=parent[y]))
            return true;
        else
            return false;
        
    }
};