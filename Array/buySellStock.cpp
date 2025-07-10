class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        
        int buyPrice = prices[0];

        for (int i = 1 ; i < prices.size() ;i++) {
            int curr_profit = prices[i] - buyPrice;
            if(curr_profit > maxProfit) {
                maxProfit = curr_profit;
            }
            if(prices[i] < buyPrice) {
                buyPrice = prices[i];
            }
        }
        return maxProfit;
        
        
        
    }
};
