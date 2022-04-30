class Solution {
public:
    
    
    void solve(vector<string>&ans, int open, int close, int n, string cur)
    {
        if(cur.size()==2*n)
        {
            ans.push_back(cur);
            return;
        }
        
        if(open<n)
        {
            cur.push_back('(');
            solve(ans, open+1, close, n, cur);
            cur.pop_back();
        }
        if(close<n and (open>close))
        {
            cur.push_back(')');
            solve(ans, open, close+1, n, cur);
            cur.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
     
        vector<string>ans;
        string cur="";
        solve(ans, 0, 0, n, cur);
        return ans;
    }
};