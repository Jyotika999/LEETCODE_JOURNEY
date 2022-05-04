class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
    
        // since each row is sorted 
        // since each col is sorted 
        // so applying bs in each row 
        // thiink of a case when rows and cols are both sorted, that is grid is sorted, 
        /// here grid is not sorted, so ans can have time of NLOGM 
        for(int i=0;i<n;i++)
        {
            int low=0;
            int high=m-1;
            while(low<=high)
            {
                int mid = (low+high)/2;
                if(matrix[i][mid]==target)
                {
                    return true;
                }
                else if(matrix[i][mid]<target)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
                
            }
        }
        return false;
        
    }
};