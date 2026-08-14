class MinStack {
private:
    stack<long long> main;
    long long minEle;
public:
    MinStack() { minEle=-1; }
    
    void push(long long value) {
        if(main.empty()){
            minEle=value;
            main.push(value);
        }
        else if(value<minEle){
            main.push(2*value-minEle);
            minEle=value;
        }
        else
            main.push(value);
    }
    
    void pop() {

        long long pop_val=main.top();
        main.pop();

        if(pop_val<minEle)
            minEle=2*minEle-pop_val;

    }
    
    int top() {
        long long top_val=main.top();

        if (top_val < minEle)
            return minEle;

        return top_val;
    }
    
    int getMin() {
        return minEle;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */