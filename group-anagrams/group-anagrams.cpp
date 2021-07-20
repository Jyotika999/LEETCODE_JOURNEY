class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        vector<vector<string>>ans;
        
        map<string, vector<string>>mp;
        
        int n = strs.size();
        
        for(int i=0;i<n ; i++)
        {
            string cur = strs[i];
            sort(cur.begin(), cur.end());
            
            mp[cur].push_back(strs[i]);
        }
        
        for(auto it : mp)
        {
            auto temp = it.second;
            ans.push_back(temp);
        }
        return ans;
    }
};



