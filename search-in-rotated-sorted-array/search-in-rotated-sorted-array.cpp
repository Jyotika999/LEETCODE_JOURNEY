class Solution {
public:
    
    
    // searching an element in a rotated sorted array 
    // firstly finding the index of the minimum element
    // from the minimum element, the whole array will get spiltted up into two subarrays which are sorted and could be used for seraching 
    
    
    int find_min_index(vector<int>&nums, int n)
    {
        int low=0;
        int high = n-1;
        
        while(low<=high)
        {
            int mid = (low)+(high-low)/2;
            
            int prev = (mid-1+n)%n;
            int next = (mid+1)%n;
            
            if(nums[mid]<nums[prev] && nums[mid]<nums[next])
            {
                return mid;
            }
            else if(nums[mid]<=nums[high])
            {
                // go to unsorted array 
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return -1;
    }
    
    int find_target(vector<int>&nums, int low, int high , int target)
    {
        while(low<=high)
        {
            int mid = (low)+(high-low)/2;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                low = mid+1;
            else
                high = mid-1;
        }
        
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        if(n==1 && nums[0]!=target)
            return -1;
        
        if(n==1 && nums[0]==target)
            return 0;
        
        if(n==0)
            return -1;
        int index =  find_min_index(nums, n);
        
        // sorted array 1 ---> (0, index-1)
        // sorted array 2 ---> (index, n-1)
        
        int ind1 = find_target(nums, 0, index-1, target);
        int ind2 = find_target(nums, index, n-1, target);
        
        
        if(ind1!=-1) return ind1;
        if(ind2!=-1) return ind2;
        
        return -1;
    
    }
};