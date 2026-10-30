class Solution:
    def numIdenticalPairs(self, nums: list[int]) -> int:
        return sum(nums.count(x) * (nums.count(x)-1) // 2 for x in set(nums))