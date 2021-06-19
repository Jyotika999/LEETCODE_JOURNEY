class MyQueue {
public:
    
    stack<int>s1;
        stack<int>s2;
    
    /** Initialize your data structure here. */
    MyQueue() {
        // stack<int>s1;
        // stack<int>s2;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        
        if(s2.empty())
        {
            if(s1.empty())
            {
                return -1;
            }
            else
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                
               int v = s2.top();
                s2.pop();
                return v;
            }
        }
        else
        {
           int v =  s2.top(); 
            s2.pop();
            return v;
        }
    }
    
    /** Get the front element. */
    int peek() {
        if(!s2.empty())
            return s2.top();
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        
        if(s1.empty() and s2.empty()) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */