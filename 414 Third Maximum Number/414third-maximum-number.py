class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        n_nums = list(set(nums)) # n_nums will not have duplicate elements
        if len(n_nums) < 3:
            return max(n_nums)
        n_nums.sort()
        del_count = 0
        for i in range(len(n_nums)-1,-1,-1):
            if (n_nums[i] == max(n_nums)) and del_count < 2:
                del n_nums[i]
                del_count+=1
        return max(n_nums)
        