class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int  n=nums.size();
        int k=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[k++]=nums[i];
            }
        }
        
        for(int i=k;i<n;i++)
        {
            nums[i]=0;
        }
        
        
    }
};

// swapping will not work, as it will change relative order of the elements
// hence two pointer wont work , right?

// next is brute force, using extra space
// insert the elements when nonzero
// time N, space N

// next is
// bring nonzero elements to front

