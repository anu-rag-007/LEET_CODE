class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        return [c + extraCandies >= max(candies) for c in candies]
