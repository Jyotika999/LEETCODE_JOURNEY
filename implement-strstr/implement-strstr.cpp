class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // find if the pattern needle is found in string haystack
        // use of KMP ALGORITHM
        
        int len_hay = haystack.length();
        int len_needle = needle.length();
        
         
        string s = needle+"#"+haystack;
        int slen = s.length();
        
        // finding the lps for the concatendated string
        int i=1, len=0;
        int lps[slen+1];
        memset(lps, 0, sizeof(lps));
        
        while(i<slen)
        {
            if(s[i] == s[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if(len>0)
                    len = lps[len-1];
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
        int count=-1;
        
        for(int i=0;i<slen;i++)
        {
            cout<<s[i]<<" "<<lps[i]<<"\n";
            if(lps[i]==len_needle)
            {
                count = i - len_needle -len_needle ;break;
            }
        }
        
        return count;
    }
};