class Solution:
    def uniqueOccurrences(self, arr: list[int]) -> bool:
        return len(set(Counter(arr).values())) == len(set(arr))