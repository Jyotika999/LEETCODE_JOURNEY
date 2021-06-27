class Solution {
public:
    
    vector<vector<int>>ans;
    
    
    void generate(vector<int>&nums, int n, vector<int>temp, map<int,int>freq)
    {
        
        // base case
        if(temp.size()==n)
        {
              if(find(ans.begin(), ans.end(), temp)== ans.end())
            {
                ans.push_back(temp);
            }
        }
      
        
        
        // all possible combinations
        for(int i=0;i<n;i++)
        {
            if(freq[i]==0)
            {
               // cout<<nums[i]<<"\n";
                freq[i]=1;
                temp.push_back(nums[i]);
                
                generate(nums, n, temp, freq);
                
                temp.pop_back();
                freq[i]=0;
            }
        }
        
        
    }
   
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
     
        int n = nums.size();
        
        vector<int>temp;
        map<int,int>freq;
        
        generate(nums, n, temp, freq);
        
        
        return ans;
    }
};