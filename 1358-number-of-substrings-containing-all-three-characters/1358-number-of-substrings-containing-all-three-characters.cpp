class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int n = s.size();
        map<char,int>mp;
        
        int i=0;
        int j=0;
        int count=0;
        int tc=0;
        int cnt=0;
        for(j=0;j<n;j++)
        {
            mp[s[j]]++;
            
            while(mp['a']>=1 and mp['b']>=1 and mp['c']>=1)
            {
                mp[s[i]]--;
                i++;
                cnt++;
            }
            
            tc+= cnt;
        }
        return tc;
        
    }
};