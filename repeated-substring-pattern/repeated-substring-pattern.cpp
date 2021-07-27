class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        string dup = s + s;
        dup = dup.substr(1, dup.size()-2);
        
        if(dup.find(s)!=-1)
            return true;
        else
            return false;
        
        
        
    }
};