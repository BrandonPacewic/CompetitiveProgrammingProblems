class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = numeric_limits<int>().max();
        int maxProfit = 0;
        
        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < lsf) {
                lsf = prices[i];
                continue;
            }

            int profit = prices[i] - lsf;
            maxProfit = max(profit, maxProfit);
        }

        return maxProfit;
    }
};
