class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      
        
        map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
             mp[nums[i]]++;
        }
        
        int ct=0;
        for(auto it : mp)
        {
            int ff = it.first;
            int ss = it.second;
            int temp=0;
            if(mp[k-ff]>0)
            {
                // cout<<mp[ff]<<" "<<mp[k-ff]<<" ";
                if(k-ff==ff)
                    temp = ss/2;
                
                else
                     temp = (min(ss, mp[k-ff]));
                
                // cout<<temp<<"\n";
                ct+=temp;
                
                mp[ff]-= temp;
                mp[k-ff]-=temp;
            }
        }
        return ct;
        
        
    }
};