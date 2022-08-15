class Node
{
public:
    char data ;
    unordered_map<char,Node*>mp;
    bool isterminal ;
    Node(char d)
    {
            data = d;
            isterminal = false;    
            // for(int i=0;i<26;i++)
            // {
                // mp['a'+i]=0;
            // }
    }
};

class Trie {
public:
    
    Node * root ;
    Trie() {
        
        root = new Node('\0');
    }
    
    void insert(string word) {
        Node * temp = root;
        int len = word.length();
        
        for(int i=0;i<len;i++)
        {
            if(temp->mp.count(word[i])==0)
            {
                Node * newnode = new Node(word[i]);
                temp->mp[word[i]] = newnode;
                
            }
            temp = temp->mp[word[i]];
        }
        temp->isterminal = true;
        
    }
    
    bool search(string word) {
        
        Node * temp = root;
        int len = word.length();
        
        for(int i=0;i<len;i++)
        {
            if(temp->mp.count(word[i])==0)
                return false;
            
            temp = temp->mp[word[i]];
        }
        return temp->isterminal;
    }
    
    bool startsWith(string prefix) {
        
        Node * temp = root;
        int len = prefix.length();
        
        for(int i=0;i<len;i++)
        {
            if(temp->mp.count(prefix[i])==0)
            {
              return false;
            }
              temp = temp->mp[prefix[i]];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */