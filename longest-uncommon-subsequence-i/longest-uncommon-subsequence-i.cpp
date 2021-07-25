class Solution {
public:
    int findLUSlength(string a, string b) {
        
        if(a==b)
            return -1;
        
        if(a.length()!=b.length())
            return max(a.length() , b.length());
        else
        {
            if(a!=b)
                return max(a.length(), b.length());
        }
        
        return 0;
    }
};