class Solution {
public:
    int appendCharacters(string s, string t) {
         int size1 = s.length(),   size2 = t.length();
        int i = 0, j = 0;
        while(i < size1 && j < size2){
            if(s[i] == t[j]){
                j++;
            }
            i++;
        }
        return size2 - j;      
        }
};