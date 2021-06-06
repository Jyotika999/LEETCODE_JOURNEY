class Solution {
public:
    
    
    void rotatematrix(vector<vector<int>>&mat)
    {
        // rotating a matrix can be made by taking a transpose, and then row-wise reversal of every row
        
        int n = mat.size();
        // taking transpose
        for(int i=0;i<n;i++)
        {
            for(int j=i; j<n;j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        // row wise reversal 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(mat[i][j] , mat[i][n-j-1]);
            }
        }
        
      
    }
    
    bool checkequal(vector<vector<int>>mat, vector<vector<int>>target)
    {
        int n = mat.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] != target[i][j])
                    return false;
            }
        }
        return true;
    }
    
    void printing(vector<vector<int>>&mat)
    {
        int n = mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        bool flag = false;
        vector<vector<int>>org = mat;
        
        for(int rot=1; rot<=4; rot++)
        {
            rotatematrix(mat);
            printing(mat);
            bool flag= checkequal(mat, target);
            if(flag==true)
                return flag;
           // cout<<flag<<"\n";
        }
        
        // if(flag==true)
        //     return true;
        // else
            return false;
        
        
        
    }
};