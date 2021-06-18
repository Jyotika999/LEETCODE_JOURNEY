class Solution {
public:
    string freqAlphabets(string s) {
        
        
     map<string, string>mp;
        
     for(int i=0;i<26;i++)
     {
         string t = to_string(i+1);
         
         if( (i+1)>=0 and (i+1)<=9)
         {
             mp[t] = 'a'+i;
         }
         else
         {
             t+="#";
             mp[t] = 'a'+i;
         }   
     }
        
        string ans="";
        
        int i=0;
        int n = s.length();
        while(i<n)
        {
            if(i+2<n and s[i+2]=='#')
            {
                // hash wali values 
                // j to z 
                
                string temp = "";
                temp+=s[i];
                temp+=s[i+1];
                temp+=s[i+2];
                ans+= mp[temp];
                i+=2;
            }
            else
            {
                // a to i
                string temp = "";
                temp+=s[i];
                ans+= mp[temp];
                i++;
            }
        }
        
        
        
        
        
        return ans;
        
        
        
    }
};