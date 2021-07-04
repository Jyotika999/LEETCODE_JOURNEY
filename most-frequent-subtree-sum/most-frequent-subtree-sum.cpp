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
    
    map<int, int>mp;
    
    int dfs(TreeNode * node)
    {
        if(node==NULL)
            return 0;
        
        
        int cur_val = node->val;
        
        int cursum =0;
        
        if(node->left!=NULL)
        {
            cursum += dfs(node->left);
        }
        
        if(node->right!=NULL)
        {
            cursum += dfs(node->right);
        }
        
        cursum += cur_val;
        mp[cursum]++;
        return cursum;
        
    }
    
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        
        int sum = dfs(root);
        
        vector<int>ans;
        int max_freq=0;
        
        for(auto it : mp)
        {
            int f = it.first;
            int s = it.second;
            
            max_freq = max( max_freq, s);
        }
        
        for(auto it : mp)
        {
            int f = it.first;
            int s = it.second;
            
            if(s==max_freq)
                ans.push_back(f);
        }
        return ans;
        
    }
};