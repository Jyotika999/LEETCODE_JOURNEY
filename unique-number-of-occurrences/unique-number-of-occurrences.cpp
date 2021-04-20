class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        set<int>s;
        
        for(auto it : mp)
        {
            int ss = it.second;
            if(s.count(ss)==0)
            {
                s.insert(ss);
            }
            else
            {
                return false;
            }
        }
        
        return true;
    }
};