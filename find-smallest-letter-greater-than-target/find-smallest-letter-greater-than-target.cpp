class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int n = letters.size();
        
        int low = 0;
        int high = n-1;
        
        int res = 0;
        
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            
            if(letters[mid] <= target)
            {
                low = mid+1;
            }
            else
            {
                res = mid;
                high = mid-1;
            }    
        }
        
        return letters[res];
        
        
    }
};