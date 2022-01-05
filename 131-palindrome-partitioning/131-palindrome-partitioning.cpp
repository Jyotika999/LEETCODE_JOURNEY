class Solution {
public:
    
    bool ispalindrome(string s)
    {
        string org = s;
        reverse(s.begin(), s.end());
        if(org==s)
            return true;
        else
            return false;
        
    }
    
    void backtrack(vector<vector<string>>&res, vector<string>&cur, string s, int start)
    {
        if(start>=s.length())
        {
            res.push_back(cur);    
        }
        
        for(int i=start;i<s.length();i++)
        {
            if(ispalindrome(s.substr(start, i-start+1)))
            {
                // adding current substring to current list
                cur.push_back(s.substr(start, i-start+1));
                
                // checking the remaining string length
                backtrack(res, cur, s, i+1);
                
                // removing the current susbtring 
                // for backtracking 
                cur.pop_back();
                
            }
        }
        
    }
    
    vector<vector<string>> partition(string s) {
       
        vector<vector<string>>result;
        vector<string>cur;
        
        backtrack(result, cur, s, 0);
        
        return result;
    }
};