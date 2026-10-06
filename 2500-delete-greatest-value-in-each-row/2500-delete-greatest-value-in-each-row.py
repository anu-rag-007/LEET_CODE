class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        m = len(grid)
        sum = 0
        while grid[0]:
            row_max = []
            for i in range(m):
                maximum = max(grid[i])
                row_max.append(maximum)
                grid[i].remove(maximum)
            sum+=max(row_max)
        return sum