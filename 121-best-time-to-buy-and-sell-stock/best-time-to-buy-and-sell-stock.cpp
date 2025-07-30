class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialize maximum profit to 0 (no transaction)
        int maxProfit = 0;
        
        // Assume the best day to buy initially is the first day
        int bestBuy = prices[0];

        // Start from the second day since we've used prices[0] already
        for (int i = 1; i < prices.size(); i++) {
            // If today's price is higher than our best buy,
            // calculate profit and update maxProfit if it's greater
            if (prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }

            // Update bestBuy if a new lower price is found
            bestBuy = min(bestBuy, prices[i]);
        }

        // Return the maximum profit we could achieve
        return maxProfit;
    }
};
