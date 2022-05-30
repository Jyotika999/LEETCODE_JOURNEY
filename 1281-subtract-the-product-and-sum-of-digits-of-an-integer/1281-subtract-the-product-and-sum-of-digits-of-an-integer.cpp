class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int pro=1;
        int sum=0;
        
        while(n)
        {
            int cur = n%10;
            n/=10;
            pro= pro*cur;
            sum=sum+cur;
        }
        return pro-sum;
        
        
        
    }
};