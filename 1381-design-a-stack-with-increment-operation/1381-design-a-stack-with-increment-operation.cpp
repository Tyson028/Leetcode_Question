class CustomStack {
private:
    vector<int> s1;
    vector<int> s2;
    int idx;
    int maxSize;
public:
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
        s1.resize(maxSize);
        s2.resize(maxSize);
        idx=-1;
    }
    
    void push(int x) {
        if(idx == maxSize-1) return;
        idx++;
        s1[idx]=x;
    }
    
    int pop() {
        if(idx==-1)
            return -1;
        
        int result=s1[idx]+s2[idx];
        if(idx>0){
            s2[idx-1]+=s2[idx];
        }

        s2[idx]=0;
        idx--;
        return result;
        
    }
    
    void increment(int k, int val) {
        int index=min(idx,k-1);
        if(index>=0)
            s2[index]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */