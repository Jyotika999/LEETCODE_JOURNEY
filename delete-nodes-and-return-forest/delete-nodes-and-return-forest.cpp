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
    
     vector<TreeNode*>ret;
   // set<TreeNode*>st1;
    set<int>st;
    
    void solve(TreeNode* root,TreeNode* par,int l){
        if(root==NULL){
            return; //  base case
        }
        
        if(st.find(root->val)!=st.end()){ //  we have to delete this node
            if(par!=NULL){ // deleting this will affect its parent
                 if(l==0){ 
                     // l==0 means child it is left child of its parent so we will set par->left = NULL
                    par->left=NULL;
                    
                }else{
                     par->right=NULL;
                                          // l==1 means child it is right child of its parent so we will set par->right = NULL
                 }
               
            }
            
            // As we have deleted this node so parent will be NULL for its child
              solve(root->left,NULL,0); // 0 means left child
              solve(root->right,NULL,1); // 1 means right child
              return;
            }
        
        // Now when we don't have to delete node
        if(par==NULL){
            // if par is NULL,start new root from this node
              TreeNode* newroot = new TreeNode(root->val);
            ret.push_back(newroot); 
              solve(root->left,newroot,0); 
              solve(root->right,newroot,1);
              return;
            
        }else{
            // when par is not NULL no need to start new root from this node
            if(l==0){
                par->left = new TreeNode(root->val); // same l==0 case
                solve(root->right,par->left,1);
                    solve(root->left,par->left,0);
                
            }else{
                par->right = new TreeNode(root->val); //  same l==1 case
                solve(root->right,par->right,1);
                    solve(root->left,par->right,0);
            }
            
            
        }
        
        
            
            
        
        
        
        
    }
    
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        int n = to_delete.size();
        ret.clear(); // As we are using global variable
        st.clear();  // As we are using global variable
        for(int i=0;i<n;i++){
            
            st.insert(to_delete[i]); // it is easier to search this way
        }
        
       // for(auto it=st.begin();it!=st.end();it++){
         //   cout << *it << endl;
        //}
        
        solve(root,NULL,-1); 
        return ret;
        
    }
};