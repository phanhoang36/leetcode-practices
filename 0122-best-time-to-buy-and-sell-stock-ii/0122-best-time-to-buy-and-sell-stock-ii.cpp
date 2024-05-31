class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int num = prices[0];
        int sum = 0;
        int dem = 0;
        for(int i = 1; i < prices.size(); i++){
            if(num >= prices[i]){
                num = prices[i];
            }
            else{
                dem = prices[i] - num;
                sum += dem;
                num = prices[i];
            }
        }
        return sum; 
    }
};