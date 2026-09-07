from collections import Counter
class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        sum = 0
        count = Counter(nums)
        for key,values in count.items():
            if values == 1:
                sum+=key
        return sum


