class CustomStack {
public:
     stack<int> st;
    int size;

    CustomStack(int maxSize) {
        size = maxSize;
    }
    
    void push(int x) {
        if(st.size() == size) return;
        st.push(x);
    }
    
    int pop() {
        if(st.size() == 0) return -1;
        int val = st.top();
        st.pop();
        return val;
    }
    
    void increment(int k, int val) { // Time Complexity -> O(st.size())
        stack<int> st0;
        while(!st.empty()) {
            st0.push(st.top());
            st.pop();
        }
        while(!st0.empty() && k--) {
            st.push(st0.top() + val);
            st0.pop();
        }
        while(!st0.empty()) {
            st.push(st0.top());
            st0.pop();
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