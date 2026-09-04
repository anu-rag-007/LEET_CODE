class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c) {
            return mat;
        }

        vector<int> arr(m * n);
        vector<vector<int>> new_mat(r, vector<int>(c));
        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[k++] = mat[i][j];
            }
        }

        k = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                new_mat[i][j] = arr[k++];
            }
        }

        return new_mat;
    }
};