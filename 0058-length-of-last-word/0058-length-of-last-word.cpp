class Solution {
public:
    int lengthOfLastWord(string s) {

        int i = s.size() - 1;
        string a;
        
        while(i >= 0){
            if(s[i] != ' '){
                break;
            }
            --i;
        }
        while(i >= 0){
            if(s[i] == ' '){
                break;
            }
            a += s[i];
            --i;
        }

        return a.size();
    }
};