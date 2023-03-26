class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last = 0;

        for (auto& x : nums) {
            if (x == val) {
                continue;
            }

            nums[last++] = x;
        }

        return last;  
    }
};
