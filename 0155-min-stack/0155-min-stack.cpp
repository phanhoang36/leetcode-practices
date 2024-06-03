class MinStack {
private:
    stack<int> st;
    multiset<int> s;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.insert(val);
        st.push(val);
    }
    
    void pop() {
        s.erase(s.find(st.top()));
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return *s.begin();
    }
};
