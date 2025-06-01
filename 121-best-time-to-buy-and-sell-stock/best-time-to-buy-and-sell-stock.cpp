class Solution {
public:
    int maxProfit(vector<int>& prices) {
         vector<int> best_prices(prices.size());
        best_prices[0] = INT_MAX;
        for(int i=1; i<prices.size(); i++){
            best_prices[i] = min(best_prices[i-1], prices[i-1]);
        }


        int max_profit = 0;
        for(int i=0; i<prices.size(); i++){
            max_profit = max(max_profit, prices[i] - best_prices[i]);
        }

        return max_profit;
    }
};