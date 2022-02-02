class Solution {
public:
    
    
    bool valid(map<char,int>m1, map<char, int>m2)
    {
        for(auto it : m1)
        {
            if(it.second == m2[it.first])
                continue;
            else
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        
        int ns = s.length();
        int np = p.length();
        int k = p.length();
        map<char, int>mp;
        
        for(int i=0;i<np;i++)
        {
            mp[p[i]]++;
        }
        
        map<char, int>ms;
        vector<int>ans;
        
        int i=0;
        int j=0;
        
        while(j<ns)
        {
            ms[s[j]]++;
            
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(valid(ms, mp))
                {
                    ans.push_back(i);
                   
                 
                }
                 ms[s[i]]--;
                   i++;
                   j++;
            }
        }
        
        return ans;
        
        
        
        
        
    }
};