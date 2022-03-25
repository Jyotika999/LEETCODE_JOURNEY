class Solution {
public:
    
    
    static bool cmp(vector<int>a, vector<int>b)
    {
        int d1 = a[0]-a[1];
        int d2 = b[0]-b[1];
        
        
        return d1<d2;
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        sort(costs.begin(), costs.end(), cmp);
        
        int n = costs.size();
         int j=n-1;
        n/=2;
        
        int a =0;
        int b =0;
        int i=0;
       
        while(n)
        {
            a+=costs[i][0];
            b+=costs[j][1];
            i++;
            j--;
            n--;
        }
     return (a+b);
        
        
    }
};