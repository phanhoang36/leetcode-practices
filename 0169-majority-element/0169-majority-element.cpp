class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int num = 0;
        sort(nums.begin(), nums.end());
        for(int x : nums){
            if(count == 0){
                num = x;
            }
            if(num == x) count += 1;
            else{
                count -= 1;
                if(count > nums.size()/2) return num;
            }          
        }
        return num;
    }
};