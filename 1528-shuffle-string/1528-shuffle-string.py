class Solution:
    def restoreString(self, s: str, indices: list[int]) -> str:
        return ''.join(c for _, c in sorted(zip(indices, s)))