class Solution {
public:
    int reachNumber(int target) {
        
        int k =0;
        
        target = abs(target);
        
        int sum=0;
        
        while(sum<target)
        {
            k++;
            sum = sum + k;
        }
        
        
        if(sum==target)
        {
            return k;
        }
        else
        {
            int dif = sum - target;
            
            if(dif%2==0)
                return k ;
            else
            {
                if(k%2==0)
                    return k+1;
                else
                    return k+2;
            }
        }
        
        return 0;
    }
};