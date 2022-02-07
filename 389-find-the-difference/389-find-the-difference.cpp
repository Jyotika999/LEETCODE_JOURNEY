class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n = s.length();
        
        int val =0;
        for(int i=0;i<n;i++)
        {
            val = val^( (int)s[i]);
        }
        
        for(int j=0;j<n+1;j++)
        {
            val = val^( (int)t[j]);
        }
        
        return char(val);
        
    }
};