class Solution {
public:
     vector<int>nums;
    
    Solution(vector<int>& nums) {
        this->nums = nums;
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
     
        // heart of the question
        // how to shuffle?
        int n  = nums.size();
        vector<int>cp (nums.begin(), nums.end());
        
        for(int i=n-1;i>=0 ;i--)
        {
            int index = rand()%(i+1);
            swap(cp[i], cp[index]);
        }
        
        return cp;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */

// The Fisher–Yates shuffle is an algorithm for generating a random permutation of a finite sequence—in plain terms, the algorithm shuffles the sequence. The algorithm effectively puts all the elements into a hat; it continually determines the next element by randomly drawing an element from the hat until no elements remain. The algorithm produces an unbiased permutation: every permutation is equally likely. The modern version of the algorithm is efficient: it takes time proportional to the number of items being shuffled and shuffles them in place.