class Solution {
public:
    int countOdds(int low, int high) {
        
        int dif = high-low;
        
        if((low&1)and(high&1))
        {
            return (dif/2)+1;
        }
        else
        {
             if(!(low&1)and(!(high&1)))
             {
                 return dif/2;
             }
            else
            {
                return 1+(dif/2);
            }
        }
        
        
        
    }
};