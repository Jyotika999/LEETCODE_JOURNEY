class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int ct=0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]&1)ct++;
            else ct=0;
            
            if(ct==3)return true;
            
        }
        if(ct==3)return true;
        return false;
        
        
    }
};