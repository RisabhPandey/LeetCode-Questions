class MinStack {

    private Stack<Integer> st;
    private Stack<Integer> min_st;

    public MinStack() {
        st = new Stack<>();
        min_st = new Stack<>();
    }
    
    public void push(int value) {
        if(st.size()==0 || min_st.peek()>=value){
            min_st.push(value);
        }
        st.push(value);  
    }
    
    public void pop() {
       int e1 = st.pop();
       int e2 = min_st.peek();

       if(e1 == e2){
        min_st.pop();
       }
    }
    
    public int top() {
        return st.peek();
    }
    
    public int getMin() {
        return min_st.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(value);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */