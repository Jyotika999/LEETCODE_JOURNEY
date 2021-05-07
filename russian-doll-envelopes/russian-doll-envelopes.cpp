class Solution {
public:
    
    
    bool valid( vector<vector<int>>& env, int i, int j)
    {
//         env[i][0] = width
//         env[i][1] = height
        
        int wi = env[i][0];
        int hi = env[i][1];
        
        int wj = env[j][0];
        int hj = env[j][1];
            
            
        if( (wi > wj ) && (hi > hj))
            return true;
        else 
            return false;
        
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        vector<vector<int>>env = envelopes;
        sort(env.begin(), env.end());
        
        // for(int i=0;i<env.size();i++)
        // {
        //     for(int j=0;j<env[0].size();j++)
        //     {
        //         cout<<env[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        
        
        int n = env.size();
        
        int ans[n];
        for(int i=0;i<n;i++)
            ans[i]=1;
        
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                
                if(valid(env, i, j)) // assure that width[i]> width[j] && height[i] > height[j]
                {
                    ans[i] = max( ans[i] , 1+ ans[j]);
                }
                
            }
            maxi = max(maxi, ans[i]);
        }
        
        return maxi;
        
        
   
        
    }
};