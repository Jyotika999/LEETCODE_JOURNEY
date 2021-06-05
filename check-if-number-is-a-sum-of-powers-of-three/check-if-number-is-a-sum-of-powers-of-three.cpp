class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        int ans=0;
        
        for(int i=15;i>=0;i--)
        {
            if(pow(3,i) <=n)
            n = n-pow(3,i);
            
            if(n==0)
                return true;
        }
        
        return false;
        
        
    }
};