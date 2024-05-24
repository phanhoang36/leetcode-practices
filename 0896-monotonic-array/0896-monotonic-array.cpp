class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int dem1 = 0, dem2 = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] <= nums[i+1]){
                dem1++;
            }
            if(nums[i] >= nums[i+1]){
                dem2++;
            }
        }
        if(dem1 == nums.size() - 1 || dem2 == nums.size() - 1){
            return true;
        }
        else return false;
    } 
};