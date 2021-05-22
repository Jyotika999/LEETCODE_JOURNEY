class Solution {
public:
    void setZeroes(vector<vector<int>>& A) {
        
    map<int, int>rowindex;
    map<int, int>columnindex;
    
    int m = A.size();
    int n = A[0].size();
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==0)
            {
                rowindex[i]++;
                columnindex[j]++;
            //    cout<<i<<" "<<j<<"\n";
            }
        }
    }
    
    for(int i=0;i<m;i++)
    {
        //int flag=0;
        for(int j=0;j<n;j++)
        {
            if(rowindex[i] || columnindex[j])
            {
                 A[i][j]=0;
            }
            
          
        }
    }
    
    return;
    }
};