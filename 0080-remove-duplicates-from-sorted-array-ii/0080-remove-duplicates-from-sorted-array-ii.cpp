class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sum = 0;
         for(int i=0; i < nums.size() - 1; i++){
             auto it = nums[i];
             if(nums[i] == nums[i+1]){
                 sum = nums[i];
            nums.erase(remove(nums.begin()+ i + 2, nums.end(),sum),nums.end());
             }
         }
        return nums.size();
    }
};