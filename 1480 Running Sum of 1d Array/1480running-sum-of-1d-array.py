class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum,sum_arr = 0, []
        for num in nums:
            sum += num
            sum_arr.append(sum)
        return sum_arr