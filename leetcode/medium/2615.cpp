class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        map<int, vector<int>> map;
        vector<long long> ans(nums.size(), 0);

        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]].push_back(i);
        }

        for (int i = 0; i < nums.size(); ++i) {
            for (auto& x : map[nums[i]]) {
                if (x == i) {
                    continue;
                }

                ans[i] += abs(i - x);
            }
        }

       return ans; 
    }
};
