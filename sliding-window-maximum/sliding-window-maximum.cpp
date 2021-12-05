class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>&A, int B) {
        int n= A.size();
    vector<int>ans;
    
    deque<pair<int,int>>dq; // to store the value and the corresponding index of every element
    int valid=0;
    
    for(int i=0;i<n;i++)
    {
        // removing the front element if it is out of the bound 
        if(!dq.empty() and dq.front().second<=(i-B))
        dq.pop_front();
        
        // pushing the elements in descending order 
        while(!dq.empty() and dq.back().first < A[i])
            dq.pop_back();
        
        // pushing the current node
        dq.push_back({A[i], i});
        
        if(i>=(B-1))
             ans.push_back(dq.front().first);
        
        // including the maximum of all the elements of current window
        
    }
        return ans;
    }
};