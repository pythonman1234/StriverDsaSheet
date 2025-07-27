class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool zero_row = false;
        bool zero_col = false;

        // Check if first column needs to be zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                zero_col = true;
            }
        }

        // Check if first row needs to be zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                zero_row = true;
            }
        }

        // Use first row and column as markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set zeroes based on markers in first column
        for (int i = 1; i < m; i++) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set zeroes based on markers in first row
        for (int j = 1; j < n; j++) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i < m; i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first column
        if (zero_col) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }

        // Handle first row
        if (zero_row) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }
    }
};
