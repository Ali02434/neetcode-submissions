class MinStack {
public:
    stack<int> st;
    stack<int> minS; 
    MinStack() {       
    }
    
    void push(int val) {
        st.push(val);
        if(minS.empty()) {
            minS.push(val);
        }
        else {
            minS.push(min(val, minS.top()));
        }
    }
    
    void pop() {
        minS.pop();
        st.pop();
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minS.top();
    }
};
