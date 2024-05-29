class Solution {
public:
    int removeDuplicates(vector<int>& nums) {              
         for(int i=0; i < nums.size() - 1; i++){
             if(nums[i] == nums[i+1]){
            nums.erase(remove(nums.begin()+ i + 1, nums.end(),nums[i]),nums.end());
             }
         }
        return nums.size();   
    }
};