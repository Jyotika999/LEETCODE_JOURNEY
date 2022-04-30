class Solution {
public:
    map<char, string>mp;
 
    
    void solve(vector<string>&ans, string digits, int index, int n, string cur )
    {
        if(index>=n)
        {
            ans.push_back(cur);
            return;
        }
        
        for(int i=0;i<mp[digits[index]].size();i++)
        {
            char ch = mp[digits[index]][i];
            cur.push_back(ch);
            solve(ans, digits, index+1, n, cur);
            cur.pop_back();
            
        }
    }
    
    vector<string> letterCombinations(string digits) {
           
        
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string>ans;
        string cur="";
        
        if(digits.length()==0)
            return ans;
        solve(ans, digits,0,  digits.length(), cur );
        return ans;
        
        
        
    }
};