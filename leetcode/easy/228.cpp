class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        if (nums.size() == 1) {
            ans.push_back(to_string(nums.front()));
            return ans;
        }

        nums.push_back(-numeric_limits<int>::max());

        for (int i = 1, j = 0; i < nums.size(); ++i) {
            if ((int64_t) nums[i - 1] + 1 == nums[i]) {
                continue;
            }

            if (nums[j] == nums[i - 1]) {
                ans.push_back(to_string(nums[j]));
            } else {
                ans.push_back(to_string(nums[j]) + "->" + to_string(nums[i - 1]));
            }

            j = i;
        }

        return ans;
    }
};
