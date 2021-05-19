class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int n = prices.size();
        
        int maxi =0;
        
        int valley = prices[0];
        int peak = prices[0];
        int last = n-1;
        int i=0;
        while(i<last)
        {
            
            while(i<last && prices[i+1]<=prices[i])i++;  
            
            valley = prices[i];
            
            
            while(i<last && prices[i+1]>=prices[i])i++;
            
            peak = prices[i];
            
            maxi += peak-valley;
            
            
        }
        
        return maxi;
        
    }
};