class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int n = trips.size();
        int prefix[1005];
        memset(prefix, 0, sizeof(prefix));
        
        
        for(int i=0;i<n;i++)
        {
            int num = trips[i][0];
            int u   = trips[i][1];
            int v   = trips[i][2];
            
            prefix[u]+=num;
            prefix[v]-=num;
            
        }
        
        if(prefix[0]>capacity)
            return false;
        
        for(int i=1;i<1005;i++)
        {
            prefix[i]+=prefix[i-1];
            if(prefix[i]>capacity)
                return false;
        }
        
        return true;
        
        
    }
};