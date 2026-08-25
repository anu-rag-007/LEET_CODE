class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        smallest_mult = k
        while smallest_mult in nums:
            smallest_mult+=k
        return smallest_mult
    