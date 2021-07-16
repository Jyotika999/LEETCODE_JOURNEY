class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       
        map<char, int>mp;
        int j = jewels.size();
        
        for(int i=0;i<j;i++)
        {
            mp[jewels[i]]++;
        }
        
        int ct=0;
        int s = stones.size();
        for(int i=0;i<s;i++)
        {
            if(mp[stones[i]])
            {
                ct++;
            }
        }
        
        return ct;
        
    }
};