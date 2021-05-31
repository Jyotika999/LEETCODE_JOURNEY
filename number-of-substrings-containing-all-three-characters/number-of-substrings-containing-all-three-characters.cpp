class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int n = s.length();
        
        int i=0;
        int j=0;
        
        int cnta=0;
        int cntb=0;
        int cntc=0;
        int maxlen=0;
        int cnt=0;
        
        while(j<n)
        {
            if(s[j]=='a')cnta++;
            if(s[j]=='b')cntb++;
            if(s[j]=='c')cntc++;
            

            while( (i<n) && (cnta && cntb && cntc))
            {
                if(s[i]=='a' )cnta--;
                if(s[i]=='b' )cntb--;
                if(s[i]=='c' )cntc--;
                i++; 
                cnt++;
            }
            
            
            maxlen = maxlen + cnt;
            
            j++;
            
            
        }
        
        
        return maxlen;
        
        
        
        
        
    }
};