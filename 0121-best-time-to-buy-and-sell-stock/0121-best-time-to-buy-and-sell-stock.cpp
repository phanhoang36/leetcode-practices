class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        int num = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(num >= prices[i]){
                num = prices[i];
            }
            else if(sum < prices[i] - num){
                sum = prices[i] - num;
            }
        }
        return sum;
    }
};