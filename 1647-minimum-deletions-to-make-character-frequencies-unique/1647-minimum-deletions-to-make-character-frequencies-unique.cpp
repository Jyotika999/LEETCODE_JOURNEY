class Solution {
public:
    int minDeletions(string s) {
        
        int n = s.length();
        map<int,int>distinct;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        // for(auto it : mp)
        // {
        //     distinct[it.second]++;
        // }
        
        int ct=0;
        for(auto it : mp)
        {
            cout<<it.first<<" "<<it.second<<"\n";
            while(mp[it.first]>=1 and distinct.find(mp[it.first])!=distinct.end())
            {
                mp[it.first]--;
                // distinct[it.second]--;
                ct++;
            }
            distinct[mp[it.first]]++;
        }
        
       return ct; 
        
        
    }
};

// aab, freq[a]=2, frq[b]=1, no matching freq
// aaabbbcc, freq[a]=3, frq[b]=3, freq[c]=2,       delete 2 a 
// ceabaacb , freq[a]=3, freq[b]=2, freq[c]=2, freq[e]=1,  delete 2 c 


