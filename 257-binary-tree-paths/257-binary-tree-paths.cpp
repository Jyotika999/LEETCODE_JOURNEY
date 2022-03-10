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
#include <string>

class Solution {
public:
    // string to_string(int n)
    // {
    //     string s="";
    //     while(n)
    //     {
    //         s+=(n%10)+'0';
    //         n=n/10;
    //     }
    //     return s;
    // }
    void dfs(TreeNode * root, string s, vector<string>&ans)
    {
        if(root==NULL)
            return;
        
        if(root->left==NULL and root->right==NULL)
        {
            ans.push_back(s);
            return;
        }
        
        if(root->left!=NULL)
        {
            string tmp = to_string(root->left->val);
            string str = s+ "->"+ tmp;
            dfs(root->left, str , ans);
        }
        if(root->right!=NULL)
        {
            string tmp = to_string(root->right->val);
            string str = s+ "->"+ tmp;
            dfs(root->right, str , ans);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        string s="";
        vector<string>ans;
        if(root==NULL)
            return ans;
        s+=to_string(root->val);
        dfs(root, s, ans);
        return ans;
        
    }
};