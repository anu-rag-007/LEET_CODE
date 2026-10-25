class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        return math.prod(map(int, str(n))) - sum(map(int, str(n)))
