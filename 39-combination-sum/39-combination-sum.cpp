class Solution {
public:
    
    
    void solve(int ind, vector<int>temp, vector<vector<int>>&ans, vector<int>&v, int n, int target)
    {
        
        if(target==0)
        {
            cout<<"hi\n";
            ans.push_back(temp);
            return;
        }
        
        if(ind>=n)
            return ;
        
        
        if(v[ind]<=target)
        {
            // choice 
            // either to include current element 
            temp.push_back(v[ind]);
            solve(ind, temp, ans, v, n, target-v[ind]);
            temp.pop_back();
            
            // or exclude the current element
            solve(ind+1, temp, ans, v, n, target);
            
        }
        else
        {
            // exclude current element 
            solve(ind+1, temp, ans, v, n, target);
        }
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        
        vector<int>temp;
        vector<vector<int>>ans;
        
        int n = c.size();
        solve(0, temp, ans, c, n, target);
        return ans;
        
    }
};