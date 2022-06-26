class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
        
        int n = cards.size();
        int totalsum=0;
        for(int i=0;i<n;i++)
        {
            totalsum+= cards[i];
        }
        
        int i=0;
        int j=0;
        int cur=0;
        int minsum=INT_MAX;
        
        for(j=0;j<n;j++)
        {
            cur+=cards[j];
            while(j-i+1>(n-k))
            {
                cur-=cards[i];
                i++;
            }
            if(j-i+1==(n-k))
            minsum = min(minsum, cur);
        }
        
        return totalsum-minsum;
        
    }
};


// take cards from beginning or from end
// you have to remove subarray of size n-k
// the subarray which will have minimum sum 

// so we will use sliding window here, and tilt the question in a way, that find the subarray of length n-k with minimum possible sum

// now, the required answer will be total sum - (sum of (n-k) elements)
