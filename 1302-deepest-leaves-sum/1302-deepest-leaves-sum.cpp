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
        
            
        queue<TreeNode *>q;
    
        q.push(root);
        
        int maxsum=0;
        
        while(!q.empty())
        {
           
            int n = q.size();
            int sum = 0;
            
            for(int i=0;i<n;i++)
            {
                TreeNode * curnode = q.front();
                q.pop();
                sum+= curnode->val;
                
                if(curnode->left!=NULL)
                {
                    q.push(curnode->left);
                  
                }
                if(curnode->right!=NULL)
                {
                    q.push(curnode->right);
                
                }
               maxsum = sum;
            }
          
        }
        
        return maxsum;
        
        
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
    

