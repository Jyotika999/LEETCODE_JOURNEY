class Solution {
public:
    
    vector<string> solve(int n)
    {
        if(n==1)
        {
            vector<string>res;
            res.push_back("0");
            res.push_back("1");
            return res;
            
        }
        vector<string>prev = solve(n-1);
        vector<string>res ;
        
        for(int i=0;i<prev.size();i++)
        {
            res.push_back("0"+ prev[i]);
        }
        
        for(int i=prev.size()-1; i>=0 ; i--)
        {
            res.push_back("1" + prev[i]);
        }
        
        return res;
        
        
    }
    
    int decimal_fun(string s)
    {
        // converting from string to decimal 
        int n = s.length();
        int res=0;
        
        for(int i=n-1;i>=0;i--)
        {
            res = res + pow(2, n-i-1)*(s[i]-'0');
        }
        return res;
        
    }
    
    vector<int> grayCode(int n) {
      
        vector<string>ans = solve(n);
        
        vector<int>finalans;
        
        for(int i=0;i<ans.size();i++)
        {
            finalans.push_back( decimal_fun((ans[i])));
        }
        
        return finalans;
        
    }
};