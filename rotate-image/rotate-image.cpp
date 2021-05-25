class Solution {
public:
    void rotate(vector<vector<int>>& A) {
        
    int n = A.size();
   
    
    // transpose of matrix means , rows becomes columns , coluumns becomes rows,
    // ar[i][j]  becomes ar[j][i] , and vice versa
    // taking the transpose of a matrix is a bit tricky , since you have to choode either upper right trinagle
    // or lower left triangle
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    
    // revresing row - wise 
    for(int i=0;i<n;i++)
    {
        reverse(A[i].begin(), A[i].end());
        
    }
    
    
    }
};