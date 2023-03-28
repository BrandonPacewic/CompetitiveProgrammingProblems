class Solution {
public:
    vector<int> dp;

    Solution() : dp{} {
        dp.push_back(0);
        dp.push_back(1);
        dp.push_back(2);

        for (int i = 3; i <= 45; ++i) {
            dp.push_back(dp[i - 1] + dp[i - 2]);
        }
    }

    int climbStairs(int n) {
        return dp[n];
    }
};
