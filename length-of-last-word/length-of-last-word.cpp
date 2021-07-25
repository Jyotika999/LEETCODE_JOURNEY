class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len = s.length();
        
        int ct=0;
        int temp=ct;
        
        for(int i=0;i<len;i++)
        {
            if(s[i]!=' ')
            {
                ct++;
                temp = ct;
            }
            else
            {
               // temp = ct;
                ct=0;
            }
        }
        
        
        
        return temp;
        
        
    }
};