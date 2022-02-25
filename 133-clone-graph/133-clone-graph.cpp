/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    unordered_map<Node*, int>vis;
    unordered_map<Node*, Node*>mp;
    
    Node* dfs(Node * node)
    {
        
        // if(node==NULL)
        //     return node;
        Node * newnode = new Node(node->val);
        vis[node]=1;
        // mp[node].insert(newnode);
        mp.insert(make_pair(node,newnode));
        
        
        for(auto child : node->neighbors)
        {
            if(vis[child]==0)
            {
               Node * childnode = dfs(child);
               // mp[newnode]=childnode;
               newnode->neighbors.push_back(childnode);
            }
            else
            {

                newnode->neighbors.push_back(mp[child]);
            }
        }
        return newnode;
        
    }
    Node* cloneGraph(Node* node) {
       
        if(node==NULL)
            return node;
        return dfs(node);
    }
};



























