class Solution {
public:
    int numberOfSteps(int num) {
        
       int ct=0;
        while(num)
        {
            if(num&1)
            {
                num--;
                ct++;
            }
            else
            {
                num/=2;
                ct++;
            }
        }
        
        return ct;
        
    }
};