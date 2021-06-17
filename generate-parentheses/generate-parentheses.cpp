class Solution {
public:
    vector<string>ans;
    
    void generate(string &s, int open, int close, int n)
    {
        if(open==n and close==n)
        {
            ans.push_back(s);
            return;
        }
        if(n-open>0)
        {
            s.push_back('(');
            generate(s, open+1, close, n);
            s.pop_back();
        }
        if(n-close>0)
        {
            if(open> close)
            {
                s.push_back(')');
                generate(s, open, close+1, n);
                s.pop_back();
            }
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        string s = "";
        generate(s, 0, 0, n);   
        return ans;
    }
};