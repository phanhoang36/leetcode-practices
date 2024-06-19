class Solution {
public:
    int jump(vector<int>& nums) {
      for(int i = 1; i < nums.size(); i++)
      {  
        nums[i] = max(nums[i] + i, nums[i-1]);
      }
      int num = 0;
      int dem = 0;
      while(num < nums.size() - 1)
      {
        dem++;
        num = nums[num];
      }
      return dem;
    }
};
