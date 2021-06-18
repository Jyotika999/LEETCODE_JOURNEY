class Solution {
public:
    int side[4];
    
    bool checkvalid(vector<int>&ar, int target, int ind )
    {
        if(ind== ar.size())
        {
            // check if all sides are equal
            for(int i=0;i<3;i++)
            {
                if(side[i]!=side[i+1])
                    return false;
            }
            return true;
        }
        
        int val = ar[ind];
        for(int i=0;i<4;i++)
        {
            if(side[i]+val<= target)
            {
                side[i]+= val;
                if(checkvalid(ar, target, ind+1))
                    return true;
                side[i]-=val;
            }
            // else
            //     return false;
        }
        
        return false;
        
    }
    
    
    bool makesquare(vector<int>& matchsticks) {
        
        int n = matchsticks.size();
        int sum=0;
        
        for(int i=0;i<n;i++)
            sum+= matchsticks[i];
        
        
        sort(matchsticks.begin(), matchsticks.end(), greater<int>());
        
        
        // for(int i=n-1;i>=0;i--)
        //     cout<<matchsticks[i]<<"\n";
        
        if(sum%4!=0)
            return false;
        
        memset(side, 0, sizeof(side));
        
        return checkvalid(matchsticks, sum/4, 0);
  
    }
};