class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curAltitude = 0, larAltitude = 0;
        for(int val : gain) {
            curAltitude += val;
            if(curAltitude > larAltitude) {
                larAltitude = curAltitude;
            }
        }
        return larAltitude;
    }
};