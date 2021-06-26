class Solution {
public:
    vector<vector<int>>ans;
    
    
    void generate(vector<int>&temp, int n , int k, int i)
    {
        
        // base condition
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        if(i==n+1)
        {
            return;
        }
        
        
        // include current element
        temp.push_back(i);
        generate(temp, n, k, i+1);
        temp.pop_back();
        
        
        // excluding current element
        generate(temp, n, k, i+1);
        
        
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>temp;
        generate(temp, n, k, 1);
        
        return ans;
    }
};