class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool> zero_row(m,false);
        vector<bool> zero_col(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    zero_row[i] = true;
                    zero_col[j] = true;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(zero_row[i] || zero_col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};