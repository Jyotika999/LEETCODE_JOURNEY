class Node{
  public:
    int flag;
    Node * ar[26];
    Node()
    {
        flag=0;
        for(int i=0;i<26;i++)
        {
            ar[i]=NULL;
        }
    }
};

class Trie {
public:
    
    Node * t = new Node();
    Trie() {
        
    }
    
    void insert(string word) {
        Node * temp = t;
        for(int i=0;i<word.size();i++)
        {
            int index = word[i]-'a';
            if(temp->ar[index]==NULL)
            {
                temp->ar[index] = new Node();
            }
            temp = temp->ar[index];
        }
        temp->flag=1;
    }
    
    bool search(string word) {
        Node * temp = t;
        
        for(int i=0;i<word.size();i++)
        {
            int index = word[i]-'a';
            if(temp->ar[index]==NULL)
                return false;
            temp=temp->ar[index];
            
        }
        return temp->flag;
    }
    
    bool startsWith(string prefix) {
        
        Node * temp = t;
        for(int i=0;i<prefix.size();i++)
        {
            int index = prefix[i]-'a';
            if(temp->ar[index]==NULL)
                return false;
            temp = temp->ar[index];
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