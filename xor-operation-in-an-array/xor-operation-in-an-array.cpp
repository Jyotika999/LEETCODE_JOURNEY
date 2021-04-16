class Solution {
public:
    int xorOperation(int n, int start) {
        
        int ar[n];
        
        for(int i=0;i<n;i++)
            ar[i] = start+ 2*i;
        
        int ans=0;
        
        for(int i=0;i<n;i++)
            ans = ans ^ ar[i];
        
        return ans;
    }
};