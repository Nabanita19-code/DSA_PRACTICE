class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
      int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> rowMins(rows);
        for (int i = 0; i < rows; i++) {
            int minVal = matrix[i][0];
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] < minVal) {
                    minVal = matrix[i][j];
                }
            }
            rowMins[i] = minVal;
        }

        vector<int> colMaxs(cols);
        for (int j = 0; j < cols; j++) {
            int maxVal = matrix[0][j];
            for (int i = 1; i < rows; i++) {
                if (matrix[i][j] > maxVal) {
                    maxVal = matrix[i][j];
                }
            }
        colMaxs[j] = maxVal;
        }

        
        for (int j = 0; j < cols; j++) {
            int maxVal = matrix[0][j];
            for (int i = 1; i < rows; i++) {
                if (matrix[i][j] > maxVal) {
                    maxVal = matrix[i][j];
                }
            }
            colMaxs[j] = maxVal;
        }

        vector<int> result;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == rowMins[i] && matrix[i][j] == colMaxs[j]) {
                    result.push_back(matrix[i][j]);
                }
            }
        }
      return result;          
    }
};