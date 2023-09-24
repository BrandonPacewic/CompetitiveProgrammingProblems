#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& heights) {
        int max_area = 0;
        int left = 0;
        int right = heights.size() - 1;

        while (left < right) {
            int area = (right - left) * std::min(heights[left], heights[right]);
            max_area = std::max(max_area, area);
            
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_area;
    }
};
