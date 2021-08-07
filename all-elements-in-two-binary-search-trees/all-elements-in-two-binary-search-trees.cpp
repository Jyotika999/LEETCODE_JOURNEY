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
    
    
    void inorder(vector<int>&list, TreeNode*root)
    {
        if(root==NULL)
            return;
        
        inorder(list, root->left);
        list.push_back(root->val);
        inorder(list, root->right);
        
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int>list1 ;
        vector<int>list2;
      
        // inorder travresal of BST is sorted
        inorder(list1, root1);
        inorder(list2, root2);
        
       // merging  two  sorted lists
        vector<int>res;
        int ptr1 = 0;
        int ptr2=0;
        
        while(ptr1<list1.size() and ptr2<list2.size())
        {
            if(list1[ptr1] < list2[ptr2])
            res.push_back(list1[ptr1]), ptr1++;
            else
            res.push_back(list2[ptr2]), ptr2++;     
            
        }
        while(ptr1<list1.size())
        {
            res.push_back(list1[ptr1]);
            ptr1++;
        }
        while(ptr2<list2.size())
        {
            res.push_back(list2[ptr2]);
            ptr2++;
        }
        return res;
        
        
    }
};