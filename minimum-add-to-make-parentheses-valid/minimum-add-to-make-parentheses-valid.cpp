class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int n = s.length();
        
        int ct=0;
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                ct++;
            if(s[i]==')')
                ct--;
            
            if(ct<0)
            {
                ans+= abs(ct);
                ct=0;
            }
            
        }
        
        ans+= ct;
        return ans;
        
        
//         () = ct =0 
//         ) 
            
//             ( ===> + count
//              ) ====> - count
            
//         ()))((
//             ct=1
//             ct=0
//             ct=-1, -1, -1, = -3
//             ct++= 2
//             ans+= ct 
//             if(Ct<0) ans+=ct
//             ct=0
//             start count again 
        
    }
};