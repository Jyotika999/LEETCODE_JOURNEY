class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        map<char,int>mp;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        
        for(int j=0;j<t.length();j++)
        {
            if(mp[t[j]]!=0)
            {
                mp[t[j]]--;
            }
            else
            {
                return false;
            }
        }
        
        for(auto it : mp)
        {
            if(it.second!=0)return false;
        }
        return true;
    }
};