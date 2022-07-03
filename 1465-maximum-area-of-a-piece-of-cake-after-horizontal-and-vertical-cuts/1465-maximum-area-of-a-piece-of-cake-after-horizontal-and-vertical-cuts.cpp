class Solution {
public:
    int maxArea(int h, int w, vector<int>& hcuts, vector<int>& vcuts) {
    
        long long int mod = 1000000007;
        hcuts.push_back(0);
        hcuts.push_back(h);
        vcuts.push_back(0);
        vcuts.push_back(w);
        
        sort(hcuts.begin(), hcuts.end());
        sort(vcuts.begin(), vcuts.end());
        
        int hmax=0;
        int vmax=0;
        
        for(int i=1;i<hcuts.size();i++)
        {
            hmax = max( hmax, hcuts[i] - hcuts[i-1]);
        }
        
        for(int i=1;i<vcuts.size();i++)
        {
            vmax = max( vmax, vcuts[i] - vcuts[i-1]);
        }
        
        long long int ans =0;
        
        ans = ((hmax%mod) * (vmax%mod))%mod;
        
        return ans;
    }
};