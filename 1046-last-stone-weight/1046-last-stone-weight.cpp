class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int n = stones.size();
        priority_queue<int>pq;
        
        for(int i=0;i<n;i++)
        {
            pq.push(stones[i]);
        }
        
        while(!pq.empty())
        {
            
            if(pq.size()==1)
                return pq.top();
            
            
            int cur1 = pq.top();
            pq.pop();
            int cur2 = pq.top();
            pq.pop();
            if(cur1!=cur2)
                pq.push(cur1-cur2);
         
        }
        
    
        return 0;
        
        
        
    }
};


//  1,  1
// 8-7 = 1
// 4-2 = 2
// 2-1 = 1
// 1-1 = 0 
     