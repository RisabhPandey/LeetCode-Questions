class MyStack {
private:
    queue<int>main;
    queue<int>helper;

public:
    MyStack() {
    }
    
    void push(int x) {
            
        while(main.size()>0){
                helper.push(main.front());
                main.pop();
            }
        main.push(x);

        while(helper.size()>0){
            main.push(helper.front());
            helper.pop();
        }
    }
    
    int pop() {
        int val = main.front();
        main.pop();
        return val;
    }
    
    int top() {
        return main.front();
    }
    
    bool empty() {
        if(main.size() == 0){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */