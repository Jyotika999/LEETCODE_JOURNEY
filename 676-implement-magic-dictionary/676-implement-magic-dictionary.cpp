class MagicDictionary {
public:
    unordered_map<string,int>mp;
    
    MagicDictionary() {
        mp.clear();
    }
    
    void buildDict(vector<string> dictionary) {
        int total_words = dictionary.size();
        
        for(int i=0;i<total_words;i++)
        {
            string cur = dictionary[i];
            mp[cur]++;
        }
    }
    
    bool search(string searchWord) {
        
        // if(mp[searchWord]>=1)
        //     return true;
        
        string cpy = searchWord;
        for(int i=0;i<searchWord.length();i++)
        {
            for(int j=0;j<26;j++)
            {
                if(searchWord[i]!=(j+'a'))
                {
                    cpy[i]=j+'a';
                    if(mp.count(cpy))
                        return true;
                    cpy[i]=searchWord[i];
                }
            }
        }
        return false;
    }
};

// /**
//  * Your MagicDictionary object will be instantiated and called as such:
//  * MagicDictionary* obj = new MagicDictionary();
//  * obj->buildDict(dictionary);
//  * bool param_2 = obj->search(searchWord);
//  */

// class Node{
//   public:
//     char data;
//     map<char,Node*>mp;
//     bool terminal ; 
//     Node(char d)
//     {
//         data = d;
//         terminal = false;
//         for(int i=0;i<26;i++)
//         {
//             mp[i+'a']=NULL;
//         }
//     } 
// };

// class Trie
// {
//   public:
//     Node * root;
//     Trie()
//     {
//         root = new Node('\0');
//     }
//     void insert(string &word)
//     {
//         int len = word.length();
//         Node * temp = root;
//         for(int i=0;i<len;i++)
//         {
//             if(temp->mp[word[i]]==NULL)
//             {
//                 Node * newnode = new Node(word[i]);
//                 temp->mp[word[i]] = newnode;
//             }
//             temp = temp->mp[word[i]];
//         }
//         temp->terminal = true;
//     }
//     bool found(string &word)
//     {
//         // cout<<word<<"\n";
//         int n = word.length();
//         Node * temp = root;
        
//         for(int i=0;i<n;i++)
//         {
//             if(temp->mp[word[i]]==NULL)
//                 return false;
            
//             temp = temp->mp[word[i]];
//         }
//         return temp->terminal;
//     }
    
// };

// class MagicDictionary {
// public:
//     Trie * t;
//     MagicDictionary() {
//         t = new Trie();
//     }
    
//     void buildDict(vector<string> dictionary) {
//         int total_words = dictionary.size();
        
//         for(int i=0;i<total_words;i++)
//         {
//             t->insert(dictionary[i]);
//         }
//     }
    
//     bool search(string searchWord) {
        
//         int len = searchWord.length();
//         string cpy = searchWord;
//         for(int i=0;i<len;i++)
//         {
//             // char org = searchWord[i];
//             for(int j=0;j<26;j++)
//             {
//                 // char cur = j+'a';
                
//                 if((j+'a') == searchWord[i])
//                     continue;
//                 else
//                 {
//                     cpy[i]=j+'a';
//                     if(t->found(cpy)==true)
//                     {
//                         // cpy[i] = org;
//                         return true;
//                     }
//                     else
//                     {
//                      cpy[i] = searchWord[i];
//                     }
//                 }
//             }
//         }
//         return false;
//     }
// };

// /**
//  * Your MagicDictionary object will be instantiated and called as such:
//  * MagicDictionary* obj = new MagicDictionary();
//  * obj->buildDict(dictionary);
//  * bool param_2 = obj->search(searchWord);
//  */