class Solution {
    public:
    bool isPalindrome(int x){
        if(x < 0) return false;
        string s = to_string(x);// Chuyển đổi từ int sang số string
        string reverse_s = s;
        reverse (reverse_s.begin(), reverse_s.end());
        if(s == reverse_s) {
            return true;
        }
        else return false;
    }
};