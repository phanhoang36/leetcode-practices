class MinStack {
private:
    stack<int> st;
    map<int, int> mm;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        mm[val]++;
        st.push(val);
    }
    
    void pop() {
        mm[st.top()]--;
        if (mm[st.top()] == 0) {
            mm.erase(st.top());
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mm.begin()->first;
    }
};
