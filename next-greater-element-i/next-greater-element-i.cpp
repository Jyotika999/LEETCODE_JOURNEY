class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();
        vector<int>ans;
        
        vector<int>nums_ans;
        
        stack<int>s;
        
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                ans.push_back(-1);
                s.push(nums2[i]);
            }
            else if(s.size()>0 and s.top()> nums2[i])
            {
                ans.push_back(s.top());
                s.push(nums2[i]);
            }
            else if(s.size()>0 and s.top()< nums2[i])
            {
                while(!s.empty() and (s.top()< nums2[i]))
                {
                    s.pop();
                }
                
                if(s.size()>0)
                  ans.push_back(s.top());
                else
                    ans.push_back(-1);
                
                s.push(nums2[i]);
            }
        }
        reverse( ans.begin(), ans.end() );
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        
        for(int i=0;i<nums1.size();i++)
        {
            int ind =  find(nums2.begin(), nums2.end(), nums1[i])- nums2.begin();
            nums_ans.push_back(ans[ind]);
        }
        
        return nums_ans;
        
        
    }
};