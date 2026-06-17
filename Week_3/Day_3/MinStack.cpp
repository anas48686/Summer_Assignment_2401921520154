class MinStack {
public:
    stack<long long> st;
    long long minVal;
    MinStack() {
        
    }
    
    void push(int val) {
        long long v=(long long)val;
        if(st.empty()){
            minVal=v;
            st.push(v);
        }
        else{
            if(v>minVal) st.push(v);
            else{
                st.push(2*v-minVal);
                minVal=v;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long n=st.top();
        st.pop();
        if(n<minVal) minVal=2*minVal-n;
        if (st.empty()) minVal = LLONG_MAX;
    }
    
    int top() {
        if(st.empty()) return -1;
        long long n=st.top();
        if(n<minVal) return minVal;
        return (int)n;
    }
    
    int getMin() {
        if (st.empty()) return -1;
        return (int)minVal;
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