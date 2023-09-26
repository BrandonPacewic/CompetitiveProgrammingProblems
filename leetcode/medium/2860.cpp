class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int valids = nums[0] > 0;

        for (int i = 0; i < nums.size(); ++i) {
            int selected = i + 1;

            if (selected > nums[i] && (i + 1 == nums.size() || selected < nums[i + 1])) {
                ++valids;
            }
        }

        return valids;
    }
};
