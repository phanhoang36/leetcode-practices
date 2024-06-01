class Solution {
public:
    int scoreOfString(string s) {
        int num = 0;
        int sum = 0;
        for(int i = 0; i < s.length() - 1; i++){
            num = abs((int)s[i] - (int)s[i + 1] );
            sum = sum + num; 
        }
        return sum;
    }
};