class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int totalgas=0;
        int totalcost=0;
        int n = gas.size();
        
        for(int i=0;i<n;i++)
        {
            totalgas+=gas[i];
            totalcost+=cost[i];
        }
        
        // the amount of gas that is filled at each station is less than the total amount of gas required to jump from one gas station to another(i.e to travel), then 
        if(totalgas<totalcost)
        {
            return -1;
        }
        
        int remgas=0;
        int ind=0;
        
        for(int i=0;i<n;i++)
        {
            remgas = remgas+gas[i]-cost[i];
            if(remgas<0)
            {
                ind=i+1;
                remgas=0;
            }
        }
        
        return ind;
    }
};