class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for i, x in enumerate(nums):
            if target - x in map:
                return [map[target - x], i]
            map[x] = i
        return []
