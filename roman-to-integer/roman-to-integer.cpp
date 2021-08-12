class Solution {
public:
    int romanToInt(string s) {
      
        // you just need to make an observation over here
        
        // ith character , (i+1)th character
        
        map<char, int>mp;
        
         mp['I']= 1;
         mp['V']= 5;
        mp['X']= 10;
        mp['L']= 50;
        mp['C']= 100;
        mp['D']= 500;
        mp['M']= 1000;
        
        
       
        
        
        int n = s.length();
        int res=mp[(s[n-1])];
        
        
     //   cout<<mp[to_string(s[n-1])]<<"\n";
        
        for(int i=n-2;i>=0;i--)
        {
            if(mp[s[i+1]]> mp[s[i]])
            {
                res = res - mp[(s[i]) ];
            }
            else
            {
                res = res + mp[(s[i]) ];
            }
            cout<<res<<"\n";
        }
        
        return res;
        
       
    }
};