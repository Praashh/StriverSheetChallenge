// The Brute-force solution that everyone can think of is traversing the entire matrix.

// Steps:

// Traverse in the matrix and when you got 0 then convert the entire column and row=-1.

// and then initialize all the -1 into 0.
// Time Complexity: O(n*m) [Traversing Matrix] + O(n*m) [Converting row and column into -1] + O(n*M) [Initilizing -1 to 0].

// Space Complexity: We are not using any extra space so O(1)

void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
    // set all non-zero elements as -1 in the row i:
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}


void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    // set all non-zero elements as -1 in the col j:
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    // Set -1 for rows and cols
    // that contains 0. Don't mark any 0 as -1:

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    // Finally, mark all -1 as 0:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}



// Optimal Approach:

// Using Column and Row array to store the index of Zero:

// Steps:

// Traverse Matrix and whenever you get 0 stores the index of the row into the row array and column into the column array.

// Traver Matrix again for Row and Column which we have to initialize with 0 and do that.

// Time Complexity: O(n*m) [Traversing First time] + O(n*m) [Traversing Second time].

// Space Complexity: O(n) + O(m) where n is the number of element in column and m is the number of element in row.

void setZeros(vector<vector<int>> &matrix)
{
        int m = matrix[0].size();
        int n = matrix.size();
        vector<int>x;
        vector<int>y;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }

        // for coverting rows into zero
        for(int i=0; i<x.size(); i++){
            int ind = x[i];
            for(int j=0; j<m; j++){
                matrix[ind][j] = 0;
            }
        }
        // for converting columns into zero
        for(int i=0; i<y.size(); i++){
            int ind = y[i];
            for(int j=0; j<n; j++){
                matrix[j][ind] = 0;
            }
        }
}
