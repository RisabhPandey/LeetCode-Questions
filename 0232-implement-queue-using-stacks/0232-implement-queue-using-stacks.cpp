class MyQueue {
private:
    stack<int>main;
    stack<int>helper;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!main.empty()){
            helper.push(main.top());
            main.pop();
        }
        main.push(x);
        while(!helper.empty()){
            main.push(helper.top());
            helper.pop();
        }
    }
    
    int pop() {
        int val = main.top();
        main.pop();
        return val;
    }
    
    int peek() {
        return main.top();
    }
    
    bool empty() {
        if(main.size() > 0){
            return false;
        }
        else{
            return true;
        }
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