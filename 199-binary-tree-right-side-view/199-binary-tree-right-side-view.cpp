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
        
        vector<int>right_view; 
        
        if(root==NULL)
            return right_view;
        
        queue<TreeNode*>q; 
        
        q.push(root);
        // [1]
        
        while(!q.empty())  
        {
            int cur_level_elements = q.size();
            // size = 2
            
            for(int ele=1;ele<=cur_level_elements;ele++)
            {
                TreeNode * curnode = q.front();  // 7
                q.pop();  // q=[]
                
                if(curnode->left!=NULL)
                    q.push(curnode->left);  // q=[
                
                if(curnode->right!=NULL)
                    q.push(curnode->right);   // q=[  ]
                
                if(ele == cur_level_elements)
                    right_view.push_back(curnode->val);  // right=[1, 3, 6, 7]
            }
             
        }
            
        return right_view;
        
        
    }
};


//      1   = [1]  = [1]
//     /\ 
//     2 3  = [2, 3] = [3]
//     /\ \ 
//     4 5 6 = [4, 5, 6] = [6]
//     /
//     7     = [7]  =[7]
    
//     right side view = 1, 3, 6, 7
     
//          q= [2, 3]
//          how many elements at current level = size of queue 
//          q = [ 4, 5, 6] = 3
         
//         Time O(V+E)
//         Space O(2^height of tree)
         
         
         
         
         
         
         
         
         
         
         
         
         
    
