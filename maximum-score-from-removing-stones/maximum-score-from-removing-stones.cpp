class Solution {
public:
    
    // take care that the game stops when 
    int maximumScore(int a, int b, int c) {
        
        priority_queue<int>heap;
        
        heap.push(a);
        heap.push(b);
        heap.push(c);
        int score=0;
        
        while(heap.size()>=2)
        {
            
        
            int first = heap.top();
            heap.pop();

            int second = heap.top();
            heap.pop();
            
           score++;
            
            first--;
            second--;
            if(first)heap.push(first);
            if(second)heap.push(second);
        }
        
        return score;
     
    }
};