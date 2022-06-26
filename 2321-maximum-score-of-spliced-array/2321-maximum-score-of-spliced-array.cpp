class Solution {
public:
    
    int kadane(vector<int>nums)
    {
        int n = nums.size();
        int cursum=0;
        int maxsum=0;
        
        for(int i=0;i<n;i++)
        {
            cursum+=nums[i];
            maxsum = max(maxsum, cursum);
            if(cursum<0)
            {
                cursum=0;
            }
        }
        return maxsum;
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        
        vector<int>res1(n, 0);
        vector<int>res2(n, 0);
        int sum1=0, sum2=0;
        
        for(int i=0;i<n;i++)
        {
            res1[i] = nums2[i]-nums1[i];
            res2[i] = nums1[i]-nums2[i];
            sum1+= nums1[i];
            sum2+= nums2[i];
        }
        
        int max1 = kadane(res1);
        int max2 = kadane(res2);
        cout<<sum1<<" "<<max1<<" "<<sum2<<" "<<max2<<"\n";
        return max(max1+sum1, max2+sum2);
        
    }
};



// maximum sum subarray compute 
// nums1 = [60, 60, 60] , sum1 = 60+60+60 = 180
// nums2 = [10, 90, 10] , sum2 = 10+90+10 = 110
// n2-n1 = [-50, 30, -50] , maxsumsubarray = 30, calculated using kadane's algo
// n1-n2 = [50,-30,50], maxsumsubarray = 50
    
// maxsum = 180+30 or 110+50 = 120 or 160 = 210 
    
// since we know that we need to remove such a subarray from array1 , which maximises its sum, so total difference it could create we calculated earlier only, then just found ki konsa subarray replace krke maximum sum bn skta h , ab woh pta lggya,toh bus original array mein replace krdo, (a1+a2+....)+(b1+b2...bx - a1-a2-...ax) = (b1+b2....+ax1+....an) // which will be the replaced array 

