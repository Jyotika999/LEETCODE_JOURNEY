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

    void help(TreeNode*root, TreeNode*parent, TreeNode*grandparent)
    {
        if(root==NULL)
        return ;

        if(grandparent!=NULL and grandparent->val%2==0)
        {
            sum+= root->val;
        }
        help(root->left, root, parent);
        help(root->right, root, parent);

    }

    int sumEvenGrandparent(TreeNode* root) {
        
        help(root, NULL, NULL);
        return sum;
    }
};