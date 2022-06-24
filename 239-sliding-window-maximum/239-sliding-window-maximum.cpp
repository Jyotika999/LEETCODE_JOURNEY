class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    
        int n = nums.size();
        // i want a data structure , so that always the front element gives us the maximum element
        // hence, when the window is out of size k , then we could also remove elements from front as well as back
        
        // deque = good data structure to serve the purpose
        // algo: the maximal element will always be at front
        // we can maintain this ds , in decreasing order
        // {index, value}
        vector<int>ans;
        deque<pair<int,int>>dq;
        
        for(int i=0;i<n;i++)
        {
            if(dq.empty())
                dq.push_front({i, nums[i]});
            else
            {
               
                   // pop all elements which have gone out of bound 
          
                while(!dq.empty() and dq.front().first<(i-k+1))
                dq.pop_front();
             // either push in front 
                if(dq.front().second <= nums[i])
                    dq.push_front({i, nums[i]});
                
                // or push at back 
                while(!dq.empty() and dq.back().second<=nums[i])
                    dq.pop_back();
                
                // if(dq.back().second>=nums[i])
                    dq.push_back({i, nums[i]});
            }
           
            
            if(i>=(k-1))
            {
                ans.push_back(dq.front().second);
            }
        }
        
        return ans;
        
        
        
    }
};