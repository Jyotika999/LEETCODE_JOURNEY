class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
       int n = mat.size();
     
        int sum=0;
    
        int i=0, j=0;
        while(i<n and j<n)
        {
            sum+= mat[i][j];
            i++;
            j++;
        }
        i=0;
        j=n-1;
        while(i<n and j>=0)
        {
            sum+=mat[i][j];
            i++;
            j--;
        }
        
        // now finding intersecting points
        i=0;
        
        while(i<n)
        {
            if(i==n-1-i)
                sum-=mat[i][i];
            
            i++;
        }
        
        
        
        return sum;
        
        
    }
};