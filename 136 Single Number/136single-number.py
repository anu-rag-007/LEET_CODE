from collections import Counter
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        count = Counter(nums)
        res = []
        for key, val in count.items():
            if val == 1:
                res.append(key)
        return res[0]




                