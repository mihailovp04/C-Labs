#include <iostream> 
#include <vector>
using namespace std;

void rearrangeMatrix(vector<vector<int>>& matrix) { 
    int n = matrix.size();

    for (int i = 0; i < n; ++i) {
        int minElement = matrix[i][0];
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }

        matrix[i][i] = minElement;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {3, 1, 4},
        {1, 5, 9},
        {2, 6, 5}
    };

    rearrangeMatrix(matrix);

    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
