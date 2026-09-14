class Solution:
    def reverseBits(self, n: int) -> int:
        bin_n = f"{n:032b}"
        rev_bin = bin_n[::-1]
        return int(rev_bin,2)

