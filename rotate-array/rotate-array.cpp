class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k= k%n;
    
        // 1 2 3 4 5 6 7 , reverse k times, where k=3
        // reverse 0.....(n-k) , revrese (n-k)....n
        // reverse whole array
        
        // 4 3 2 1 7 6 5
        // 5 6 7 1 2 3 4 
        
        
        reverse( nums.begin(), nums.begin() + n-k);
        reverse(nums.begin()+ n-k,nums.begin()+ n);
        reverse(nums.begin(), nums.end());
        
        
        
        
    }
};