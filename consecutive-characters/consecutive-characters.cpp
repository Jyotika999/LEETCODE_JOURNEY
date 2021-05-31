class Solution {
public:
    int maxPower(string s) {
        
        int n = s.length();
        
        int prev = s[0];
        int cnt=1;
        int maxi = 1;
        
        for(int j=1;j<n;j++)
        {
            if(s[j]==prev)
            {
                cnt++;
            }
            else
            {
                prev = s[j];
                cnt=1;
            }
            
            maxi = max(maxi, cnt);
        }
        
        return maxi;
        
        
    }
};