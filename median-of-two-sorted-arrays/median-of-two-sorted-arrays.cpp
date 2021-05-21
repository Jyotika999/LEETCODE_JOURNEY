class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        int n1 = nums1.size();
        int n2 = nums2.size();
        int totalsize = n1 + n2;
        int flag=0;
        priority_queue<int, vector<int>, greater<int>>pq;
        
        for(int i=0;i<n1;i++)
            pq.push(nums1[i]);
        
        for(int j=0;j<n2;j++)
            pq.push(nums2[j]);
        
        
        if(totalsize%2==0) 
            flag=1;
            // take middle , and middle+1 
            
        else{}
            // take middle only
        
        int ct=0;
        int mid = ceil(totalsize/2.0);
        double median =0;
        
        while(!pq.empty()&& ct<mid)
        {
              ct++;
            if(ct== mid)
            {
                    int ff = pq.top();
                    pq.pop();
                    median = ff;
                if(flag==0)
                {
                    break;
                }
                else
                {
                    int ss = pq.top();
                    median+= ss;
                    median = median/2;
                    break;
                }
            }
            pq.pop();
          
        }
        return median;
        
        
        
        
        
        
    }
};