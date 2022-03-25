/*Those who find it hard understanding the significance of the difference :-For every person we have to select either city A or City B for sure.But the case is we can only send half of the people to A and remaining to B. Example we have 100 people we have to send 50 to A and 50 to B. once we sent 50 people to A we have no other option but to send remaining to B, and pay the price of B. So the 50 A we selected should be such that the price of B corresponding to those A should be as higher than A as possible(ie, B-A should be as high as possible) so (Avoiding that B is most beneficial for us ). Hence we are taking difference.*/

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