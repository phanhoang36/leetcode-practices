class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = nums.begin();
        for(int i = 0; i < nums.size() - 1; i++){;
            if(nums[i] == nums[i + 1]){
                nums.erase(it + i+1);
                i--;
            }
        }            
        return nums.size();   
    }
};