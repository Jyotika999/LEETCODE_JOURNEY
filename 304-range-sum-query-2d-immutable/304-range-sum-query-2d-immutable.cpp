class NumMatrix {
public:
  
    vector<vector<int>>mat;
    
    NumMatrix(vector<vector<int>>& matrix) {
        
    
        int n = matrix.size();
        int m = matrix[0].size();
        
        mat.resize(n);
        for(int i=0;i<n;i++)
        mat[i].resize(m);
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                mat[i][j] = matrix[i][j];
                if(i-1>=0)
                    mat[i][j]+= mat[i-1][j];
                if(j-1>=0)
                    mat[i][j]+= mat[i][j-1];
                if(i-1>=0 and j-1>=0)
                    mat[i][j]-=mat[i-1][j-1];
            }
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        

    }
    
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int sum = mat[row2][col2];
       
        if(col1-1>=0)
            sum-= mat[row2][col1-1];

        if(row1-1>=0)
            sum-= mat[row1-1][col2];
        
        if((row1-1>=0) and (col1-1>=0))
        sum+= mat[row1-1][col1-1];
        
        return sum;
        
       
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */