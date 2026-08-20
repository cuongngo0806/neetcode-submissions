class MinStack {
private:
    long min;
    stack<long> s;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(0);
            min = val;
        } else{
            s.push(val-min);
            if(val < min) min = val;
        }
    }
    
    void pop() {
        if(!s.empty()) {
            long pop = s.top();
            s.pop();
            if(pop < 0) min = min - pop;
        }
    }
    
    int top() {
        long top = s.top();
        return (top > 0) ? min + top : min;
    }
    
    int getMin() {
        return min;
    }
};
