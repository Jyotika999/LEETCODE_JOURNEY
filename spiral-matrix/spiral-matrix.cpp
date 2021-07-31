class Solution {
public:
    
    
    void solve(vector<vector<int>>&matrix, int r1, int r2, int c1, int c2, vector<int>&order)
    {
        if(r1>r2)
            return ;
        if(c1>c2)
            return;
        
        // first row 
        for(int j=c1 ;j<=c2; j++)
           order.push_back(matrix[r1][j]);
    
        // last column
        for(int i=r1+1; i<=r2 ; i++)
            order.push_back(matrix[i][c2]);
        
        
        // last row
        if(r1!=r2){
        for(int j=c2-1; j>=c1; j--)
            order.push_back(matrix[r2][j]);
        }
        
        // first col
        if(c1!=c2){
        for(int i=r2-1; i>=r1+1; i--)
            order.push_back(matrix[i][c1]);
        }
        
        r1++;
        r2--;
        c1++;
        c2--;
        
        solve(matrix, r1, r2, c1, c2, order);
        
    }
    
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int>order;
        
        solve(matrix, 0, n-1, 0, m-1 , order);
        
        return order;
        
        
    }
};