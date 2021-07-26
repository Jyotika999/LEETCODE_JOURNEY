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
   vector<int> largestValues(TreeNode* root) {
            vector<int> rowwise_largest;
       
       
            if(root== NULL)
                return rowwise_largest;
            queue< TreeNode*>levels;
            levels.push( root);
            while( !levels.empty())
            {
                int maxi = INT_MIN;
                int cur_level = levels.size();
                while( cur_level--)
                {
                TreeNode * curnode = levels.front();
                maxi = max( maxi, curnode->val);
                levels.pop();
                if(curnode->left!=NULL)
                    levels.push(curnode->left);
                if(curnode->right!=NULL)
                    levels.push(curnode->right);
                }
                rowwise_largest.push_back( maxi ) ;
            }
           return rowwise_largest ;
}

};