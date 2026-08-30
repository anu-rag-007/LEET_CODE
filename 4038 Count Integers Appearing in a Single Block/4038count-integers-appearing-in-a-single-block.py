class Solution:
    def countSpecialIntegers(self, nums: list[int]) -> int:
        if not nums:
            return 0
        single = [nums[0]]
        for i in range(1,len(nums)):
            if nums[i-1]!=nums[i]:
                single.append(nums[i])

        from collections import Counter
        count = Counter(single)

        single_block_count = 0
        for num,frequency in count.items():
            if frequency == 1:
                single_block_count += 1
        return single_block_count  