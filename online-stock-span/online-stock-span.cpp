class StockSpanner {
public:
    
    // counting the consecutive smaller or equal elements before it 
    
    stack<pair<int,int>>container;
    int ind=0;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        ind++;
        if(container.empty())
        {
            container.push({price, ind});
             return 1;
        }
        else if(container.size()>0  and (container.top().first > price) )
        {
            int i = container.top().second;
            container.push({price, ind});
            
            return (ind - i);
        }
        else if(container.size()>0 and (container.top().first <= price))
        {
            while(!container.empty() and container.top().first <= price)
            {
                container.pop();
            }
            if(container.empty())
            {
                container.push({price, ind});
                return ind;
            }
            else
            {
                int i = container.top().second;
                container.push({price, ind});
                return ind-i;
            }
        }
        return 0;
        
    }
};


/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */