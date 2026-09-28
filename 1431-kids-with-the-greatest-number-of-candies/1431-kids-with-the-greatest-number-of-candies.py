class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        ans = []
        for candy in candies:
            og = candies
            candy+=extraCandies
            if candy >= max(og):
                ans.append(True)
            else:
                ans.append(False)
        return ans
