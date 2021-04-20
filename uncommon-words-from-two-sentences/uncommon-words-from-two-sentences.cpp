class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
    
        map<string,int>mp;
        string s="";
        for(int i=0;i<A.length();i++)
        {
            if(A[i]!=' ')
            {
                s+=A[i];
            }
            else
            {
               // cout<<s<<"\n";
                mp[s]++;
                s="";
            }
        }
        
        mp[s]++;
        
        
        // for(auto it : mp)
        // {
        //     string s = it.first;
        //     int count = it.second;
        //     cout<<s<<"\n";
        //     //if(count!=0)ans.push_back(s);
        // }
        s="";
        
        for(int i=0;i<B.length();i++)
        {
            if(B[i]!=' ')
            {
                s+=B[i];
            }
            else
            {
               mp[s]++;
                s="";
            }
        }
        
      
        mp[s]++;
        
        
        vector<string>ans;
        
        for(auto it : mp)
        {
            string s = it.first;
            int count = it.second;
            if(count==1)ans.push_back(s);
        }
        
        return ans;
        
    }
    
};