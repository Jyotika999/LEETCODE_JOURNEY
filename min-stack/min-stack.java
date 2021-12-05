class MinStack {
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
// class MinStack {
// 	Stack<Integer> stack1 = new Stack<>();
// 	Stack<Integer> stack2 = new Stack<>();
// 	int min_element = 100000;
	
//    public void push(int x) {
// 		stack1.push(x);
// 		if((stack2.empty()) || (min_element >= x)){
// 			min_element = x;
// 			stack2.push(x);
// 		}
// 		return;
//     }
//    public void pop() {
// 		if(stack1.peek() == getMin()){
// 			stack2.pop();
// 		}
// 		stack1.pop();
// 		return;
//     }
//    public int top() {
// 		return stack1.peek();
	    
//     }
//    public int getMin() {
// 		return stack2.peek();
	    
//     }
// }


// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack obj = new MinStack();
//  * obj.push(val);
//  * obj.pop();
//  * int param_3 = obj.top();
//  * int param_4 = obj.getMin();
//  */