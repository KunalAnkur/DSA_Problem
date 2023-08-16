class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> m = matrix;
        for(int i = 0; i < m.size(); i++) {
            for(int j = 0; j < m[i].size(); j++) {
                if(m[i][j] == 0)
                    iterateMatrixZero(matrix, i, j);
            }
        }
    }

    void iterateMatrixZero(vector<vector<int>>& matrix, int i, int j) {
        for(int it = 0; it < matrix[i].size(); it++) {
            matrix[i][it] = 0;
        }

        for(int it = 0; it < matrix.size(); it++) {
            matrix[it][j] = 0;
        }
    }
};