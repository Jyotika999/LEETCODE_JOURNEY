class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size();
        int totalgas =0;
        int totalcost=0;
        
        for(int i=0;i<n;i++)
        {
            totalgas = totalgas + gas[i];
            totalcost = totalcost + cost[i];
        }
        
        if(totalgas < totalcost)
            return -1;
        
        int i=0;
        int j;
        int rem_gas=0;
        
        
        for(j=0; j<n; j++)
        {
            rem_gas = rem_gas + gas[j] - cost[j];
            if(rem_gas<0)
            {
                i = j+1;
                rem_gas =0;
            }
        }
        
        
        return i;
    }
};