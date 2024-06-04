class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set <char> t;
        int sum = s.length();
            t.insert(s[0]);
        for(int i = 1; i < s.length(); i++){
                if(t.find(s[i]) == t.end()){
                    t.insert(s[i]);
                }
                else{
                    t.erase(s[i]);
                }
            }
        if(t.size() == 0) return sum;
                   return sum - t.size() + 1;
    }
};