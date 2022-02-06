class Solution {
public:
    
//     if(targetseconds<=99)
//         min+sec , or , only sec
        
//     if(targetseconds>99)
//         if min<=99 
//             then min+sec
            
//             min=min-1
//             sec = sec+60
            
//         if sec<=99
//             then min, sec
        
        
    int solve(int startat, int movecost, int pushcost, int minutes, int seconds)
    {
        int target = minutes*100+seconds;
        
        vector<int>v;
        while(target)
        {
            v.push_back(target%10);
            target /=10;
        }
        reverse(v.begin(), v.end());
        int ans=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==startat)
            {
                // startat = 0;
                ans+=pushcost;
            }
            else
            {
                ans+= pushcost;
                ans+=movecost;
                startat = v[i];
            }
           
        }
        
     
        cout<<minutes<<" "<<seconds<<" "<<ans<<"\n";
        return ans;
    }
    
    
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        
        int ans = INT_MAX;
        
        if(targetSeconds<=99)
        {
            int minutes = targetSeconds/60;
            int seconds = targetSeconds%60;
           ans = min(ans, solve(startAt, moveCost, pushCost, 0, targetSeconds));
           ans = min(ans, solve(startAt, moveCost, pushCost, minutes, seconds));
        }
        else
        {
             int minutes = targetSeconds/60;
            int seconds = targetSeconds%60;
            
            if(minutes<=99)
            {
                ans = min(ans, solve(startAt, moveCost, pushCost, minutes, seconds));
            }
          
            if(seconds+60 <=99)
            ans = min(ans, solve(startAt, moveCost, pushCost, minutes-1, seconds+60));
        }
        
        
        
        return ans;
        
    }
};