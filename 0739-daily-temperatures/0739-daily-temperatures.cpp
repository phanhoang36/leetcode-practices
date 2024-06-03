class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        // [73,74,75,71,69,72,76,73]
        // stack = [] Chứa lớn hơn gần nhất
        
        const int n = t.size();
        stack<int> st;
        vector<int> ans;
        
        for (int i = n - 1; i >= 0; --i) {
            while (st.size() > 0 and t[st.top()] <= t[i]) {
                st.pop();
            }
            if (st.empty()) {
                ans.push_back(0);
            }
            else {
                ans.push_back(st.top() - i);
            }
            st.push(i);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};