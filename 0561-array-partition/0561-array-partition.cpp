class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int dem = 0, sum = 0;
        sort(nums.begin(),nums.end());
        for(int i=0; i < nums.size() - 1 ; i+=2){
            dem = min(nums[i],nums[i+1]);
            sum += dem;                  
        }
        return sum;
    }
};