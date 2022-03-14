class Solution {
public:
    vector<vector<int>>ans;
    
    void solve(vector<vector<int>>&permutations, vector<int>&temp, vector<int>&nums,  int n, map<int,int>&mp)
    {
        if(temp.size()==n)
        {
            permutations.push_back(temp);
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]==0)
            {
               // include current elemnt
                mp[nums[i]]++;
                temp.push_back(nums[i]);
                solve(permutations, temp, nums, n, mp);
               //  exclude current element
                mp[nums[i]]=0;
                temp.pop_back();
            }
        }
       
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
            int n = nums.size();
            
            vector<int>temp;
            map<int,int>mp;
        vector<vector<int>>permutations;
            solve(permutations, temp, nums,  n, mp);
            return permutations;
    }
};