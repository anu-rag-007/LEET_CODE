from typing import List
import math as m
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans = []
        for n in range(numRows):
            row = []
            for r in range(n+1):
                row.append(m.factorial(n)//(math.factorial(r)*math.factorial(n-r)))
            ans.append(row)
        return ans