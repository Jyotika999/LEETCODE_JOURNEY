class Solution {
public:
    int minPartitions(string n) {
        // 
        int len = n.length();
        
        int maxi=0;
        
        for(int i=0;i<len;i++)
        {
            maxi = max(maxi, n[i]-'0');
        }
        return maxi;
        
    }
};


// minimum number of integers = 1, 0, 10, 11, 01, 111...
// initially this question seems to be a dp problem, similar to coin change problem, but be careful of the constraints , since you can have n lmit to 10^5 , and then number of possible value are certianly greater than 10^3 , 
// hence dp is good, bu twont wont work here
// so now super deceptive observation,
// Let's use the string n = "25941" for our example.
// One way to think about this number, or any number, is that for our deci-binary numbers to sum up to n, each digit d needs to consist of exactly d 1's. For example, our first digit is 2 which suggests that we need 2 1's to make up that number