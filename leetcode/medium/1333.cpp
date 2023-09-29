class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int> ans;

        for (auto& x : restaurants) {
            if (veganFriendly && !x[2]) {
                continue;
            } else if (x[3] > maxPrice) {
                continue;
            } else if (x[4] > maxDistance) {
                continue;
            }

            ans.push_back(x[0]);
        }

        
        sort(ans.begin(), ans.end(), [&](const int& a, const int& b) -> bool {
            if (restaurants[a - 1][1] == restaurants[b - 1][1]) {
                return a > b;
            } else {
                return restaurants[a - 1][1] > restaurants[b - 1][1];
            }
        });

        return ans;
    }
};
