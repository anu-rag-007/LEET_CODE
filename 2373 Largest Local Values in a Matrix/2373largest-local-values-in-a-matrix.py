class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        n = len(grid)
        maxLocal = [[0 for _ in range(n-2)] for _ in range(n-2)]
        for i in range(n-2):
            for j in range(n-2):
                maxLocal[i][j] = max(
                    grid[m][k]
                    for m in range(i,i+3)
                    for k in range(j,j+3)
                    )
        return maxLocal