/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int level[10004];
    int vis[10004];
    
    int maxDepth(Node* root) {
       
        if(root==NULL)
            return 0;
        
        queue<Node*>q;
        memset(level, 0, sizeof(level));
        memset(vis, 0, sizeof(vis));
        
        q.push(root);
        
    //    level[root->val]=1;
        int maxi=0;
        vis[root->val]=1;
        
        while(!q.empty())
        {
            int sz = q.size();
            maxi++;
            for(int i=1;i<=sz;i++)
            {
            auto cur = q.front();
            q.pop();
            for(auto child : cur->children)
            {
                if(child!=NULL)
                {
                   // vis[child->val]=1;
                    q.push(child);
                  //  level[child->val]  =  level[cur->val]+1;
                  
                }
            }
            }
        }
        
        return maxi;
        
    }
};