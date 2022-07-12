class Solution {
public:
    
    vector<int>prime={2, 3, 5};
    
    bool isUgly(int n) {
        
        if(n<=0)
            return false;
        for(int i=0;i<3;i++)
        {
            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                {
                    n/=prime[i];
                }
            }
        }
        if(n==1)
            return true;
        return false;
        
        
    }
};