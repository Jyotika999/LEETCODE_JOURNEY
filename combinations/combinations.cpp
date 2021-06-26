class Solution {
public:
    vector<vector<int>>ans;
    
    void print(vector<int>&temp)
    {
        int n = temp.size();
        for(int i=0;i<n;i++)
            cout<<temp[i]<<" ";
        cout<<"\n";
        return;
        
    }
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
        // cout<<"AFTER INCLUDING CURRENT ELEMENT\n";
        // print(temp);
        temp.pop_back();
        // cout<<"AFTER INCLUDING AND POPPING BACK CURRENT ELEMENT\n";
        // print(temp);
        
        
        // excluding current element
        generate(temp, n, k, i+1);
        
        
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>temp;
        generate(temp, n, k, 1);
        
        return ans;
    }
};