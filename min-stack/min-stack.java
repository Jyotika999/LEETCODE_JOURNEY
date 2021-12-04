class MinStack {

//     public MinStack() {
        
//     }
    
//     public void push(int val) {
        
//     }
    
//     public void pop() {
        
//     }
    
//     public int top() {
        
//     }
    
//     public int getMin() {
        
//     }
   // class MinStack {
    Stack<Integer> stack1 = new Stack<Integer>();
    Stack<Integer> stack2 = new Stack<Integer>();
   public void push(int x) {
        stack1.push(x);
        if (stack2.isEmpty() || x <= getMin()) {
            stack2.push(x);
        }
    }
    public void pop() {
        if (stack1.peek() == getMin()) {
            stack2.pop();
        }
        stack1.pop();
    }
   public int top() {
        return stack1.peek();
    }
    public int getMin() {
        return stack2.peek();
    }
}
//     Stack<Integer> stack1 = new Stack<Integer>();
// 	Stack<Integer> minstack = new Stack<Integer>();
// 	int min = Integer.MAX_VALUE;
//    public void push(int x) {
		
// 		if(x<min){
// 			min = x;
// 			minstack.push(x);
// 		}
// 		stack1.push(x);
		
//     }
//    public void pop() {
// 		if(stack1.peek()==min){
// 			minstack.pop();
// 		}
// 		stack1.pop();
//     }
//    public int top() {
// 		return stack1.peek();
	    
//     }
//    public int getMin() {
// 		return minstack.peek();
	    
//     }
//}


// minstack 
// push(0)
// push(1)
// push(0)
// getmin
// pop()
// getmin

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */