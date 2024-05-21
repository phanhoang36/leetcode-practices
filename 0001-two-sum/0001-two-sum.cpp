class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; ++i) {
            int val = nums[i];
            if(mp.count(target - val) > 0) {
                return { mp[target - val],  i};
            }
            mp[val] = i; 
        }
        return {};
    }
};