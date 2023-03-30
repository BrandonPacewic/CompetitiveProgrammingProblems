class Solution {
public:
    vector<vector<int>> dp;

    Solution() : dp{} {
        for (int i = 0; i <= 30; ++i) {
            vector<int> row(i + 1);

            for (int j = 0; j < i + 1; ++j) {
                if (j == 0 || j == i) {
                    row[j] = 1;
                    continue;
                }

                row[j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }

            dp.push_back(row);
        }
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(dp.begin(), dp.begin() + numRows);
        return ans;        
    }
};
