class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        
       // i have to maximum 2 stones everytime , then smash them together 
        
      priority_queue<int>pq;
      int n = stones.size();
        
      for(int i=0;i<n;i++)
      {
          pq.push(stones[i]);
      }
        
      while(pq.size()>1)
      {
          int heavy = pq.top();
          pq.pop();
          int light = pq.top();
          pq.pop();
          
          if(pq.empty() and (heavy==light))
              return 0;
          if(heavy!=light)
          pq.push(heavy-light);
      }
        return pq.top();
        
    }
};