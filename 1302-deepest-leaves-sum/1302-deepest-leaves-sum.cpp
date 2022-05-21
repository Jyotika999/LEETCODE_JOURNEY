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
    int deepestLeavesSum(TreeNode* root) {
        
//         q={(1, 0) }
//         level[0]=1 
//         q = {(2, 1), (3, 1)}
//         level[1]=2 
//         q = {(3, 1) , (4, 2), (5, 2)}
//         level[1]=5
        
            
        queue<pair<TreeNode *, int>>q;
        vector<int>level(10000, 0);
        
        q.push({root, 0});
        int maxi=0;
        
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            TreeNode* curnode = cur.first;
            int curlevel = cur.second;
            level[curlevel]+=curnode->val;
            maxi = max(maxi, curlevel);
            
            if(curnode->left!=NULL)
            {
                q.push({curnode->left, curlevel+1});
                // level[curlevel+1]+=cur->left->val;
            }
            if(curnode->right!=NULL)
            {
                q.push({curnode->right, curlevel+1});
                // level[curlevel+1]+=cur->right->val;
            }
        }
        
        return level[maxi];
        
        
    }
};

// q=[1]
// level=1
// q=[2,3]
// level=3 , q[ 4, 5, 6]










// level[0] = {1}
// level[1] = {2, 3}
// level[2] = {4, 5, 6} 
// level[3] = {7, 8}

// deepest elevel = 3
//     sum = 7+8 = 15 
    

