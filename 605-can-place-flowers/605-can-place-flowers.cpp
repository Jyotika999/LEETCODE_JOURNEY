class Solution {
public:
    
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int f = flowerbed.size();
        int ct=0;
        
        for(int i=0;i<f;i++)
        {
            if(flowerbed[i]&1)
            {
                i++;
            }
            else
            {
                if(i+1<f and flowerbed[i+1]==0)
                {
                    cout<<i<<"\n";
                ct++;
                i++;
                }
                else if(i+1>=f)
                {
                    ct++;
                    
                }
            }
        }
        if(ct>=n)
            return true;
        else
            return false;
    }
};