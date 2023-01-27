class MinStack {
public:
    stack<pair<int,int>>s;
    int minval;
    MinStack() {
        
        
    }
    
    void push(int val) {
        if(s.empty()){
        minval = val;
        }
        else{
            minval = min(minval,val);
        }
        s.push(make_pair(minval,val));     
    }
    
    void pop() {
        s.pop();
        if(s.empty())return;
        else{
            minval=s.top().first;
        }
    }
    
    int top() {
        return  s.top().second;
    }
    
    int getMin() {
        return s.top().first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */