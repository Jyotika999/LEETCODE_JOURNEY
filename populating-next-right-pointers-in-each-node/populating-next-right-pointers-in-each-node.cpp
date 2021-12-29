/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(root==NULL)
            return root;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                auto cur=q.front();
                q.pop();
                if(cur->left!=NULL)
                    q.push(cur->left);
                
                if(cur->right!=NULL)
                    q.push(cur->right);
                
                
                if(!q.empty() and n)
                {
                    auto cur2=q.front();
                    cur->next=cur2;
                    cout<<cur->val<<" "<<cur2->val<<"\n";
                }
                else
                {
                    cur->next=NULL;
                }
                
            }
            
        }
        
        return root;
        
    }
};