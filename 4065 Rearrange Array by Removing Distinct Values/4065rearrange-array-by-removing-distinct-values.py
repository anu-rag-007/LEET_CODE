class Solution:
    def rearrangeArray(self, nums: list[int]) -> list[int]:
        freq = {}
        ans = []
        for num in nums:
            freq[num] = freq.get(num,0)+1

        while freq:
            for i in sorted(freq):
                ans.append(i)
                freq[i] -= 1
            for i in list(freq):
                if freq[i] == 0:
                    del freq[i]
        return ans