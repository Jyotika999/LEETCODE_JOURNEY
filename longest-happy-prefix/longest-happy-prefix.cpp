class Solution {
public:
    string longestPrefix(string s) {
        
       // straightforward KMP ALGORITHM QUESTION : TIME O(N)
        
        int i = 1 , len=0;
        
        int lps[s.length()+1];
        
        memset(lps, 0, sizeof(lps));
        
        int maxlen = 0;
        lps[0]=0;
        
        while(i<s.length())
        {
            
            if(s[i] == s[len])
            {
               
                lps[i] = ++len;
                i++;
            }
            else
            {
                if(len>0)
                {
                    len = lps[len-1];
                }
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
          
        }
        
    
       return s.substr(0, len);
    }
};