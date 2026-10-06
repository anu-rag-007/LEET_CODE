class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int sum = 0;
        for(int j=0;j<n;j++){
            int colmax = 0;
            for(int i=0;i<m;i++){
                colmax = max(colmax,grid[i][j]);
            }
            sum+=colmax;
        }
        return sum;
    }
};