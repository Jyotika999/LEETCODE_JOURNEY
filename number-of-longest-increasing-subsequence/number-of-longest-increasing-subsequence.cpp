class Solution {
public:
    int findNumberOfLIS(vector<int>& ar) {
     
        int maxi =0;
        int n = ar.size();
        int ct=0;
        
        int ans[n];
        int count[n];
        for(int i=0;i<n;i++)
        {
            ans[i]=1;
            count[i]=1;
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(ar[i] > ar[j])
                {
                    if(ans[j] >= ans[i])
                    {
                        ans[i] = ans[j]+1;
                        count[i] = count[j];
                    }
                   else if( ans[i] == ans[j]+1)
                   {
                       count[i]+= count[j];
                   }
                }
            }
            maxi = max(maxi, ans[i]);
        }
        

       // cout<<maxi<<"\n";
        
        for(int i=0;i<n;i++)
        {
            //cout<<ans[i]<<maxi<<"\n";
           if(ans[i]==maxi)ct+= count[i]; 
        }
           
        
        
        return ct;
    }
};