class Solution {
public:
    bool canJump(vector<int>& nums) {
         int num = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i + nums[i] >= num) {
                num = i;
            }
        }
        return num == 0? true : false;
    }
};