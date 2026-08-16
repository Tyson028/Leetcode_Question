class CustomStack {
private:
    stack<int> s1;
    stack<int> s2;
    int max_cap;
public:
    CustomStack(int maxSize) {
        max_cap=maxSize;
    }
    
    void push(int x) {
        if(s1.empty() || s1.size() < max_cap)
            s1.push(x);
    }
    
    int pop() {
        int pop_val=-1;
        if(s1.empty())
            return pop_val;
        else
            pop_val=s1.top();
            s1.pop();
    
        return pop_val;
        
    }
    
    void increment(int k, int val) {
        if(s1.size()<k){

            while(!s1.empty()){
                s2.push(s1.top()+val);
                s1.pop();
            }

            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        else{
            while(s1.size()!=k){
                s2.push(s1.top());
                s1.pop();
            }

            while(!s1.empty()){
                s2.push(s1.top()+val);
                s1.pop();
            }
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */