

class WordDictionary {
public:
    
    unordered_map<int, vector<string>>mp;
    
    WordDictionary() {
        mp.clear();
        
    }
    
    void addWord(string word) {
        mp[(word.size())].push_back(word);
    }
    
    bool search(string word) {
        
        int n = word.size();
       
            for(auto it : mp[word.size()])
            {
                string s = it;
                int flag=1;
               
                if(s.length() == word.length())
                {
                     // cout<<word<<" "<<s<<"\n";
                 for(int i=0;i<n;i++)
                  {
                     if(word[i]=='.')
                         continue;
                     if(word[i]!=s[i])
                     {
                         flag=0;break;
                     }
                    }
                }
                else
                    flag=0;
                
                if(flag)
                    return true;
             }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */