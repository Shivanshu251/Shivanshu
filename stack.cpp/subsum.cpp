#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> prefix(n, vector<int>(m, 0));

    // Build prefix sum matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            prefix[i][j] = mat[i][j];

            if (i > 0) prefix[i][j] += prefix[i - 1][j];
            if (j > 0) prefix[i][j] += prefix[i][j - 1];
            if (i > 0 && j > 0) prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }

    // Submatrix coordinates
    int r1 = 1, c1 = 1;
    int r2 = 2, c2 = 2;

    int sum = prefix[r2][c2];

    if (r1 > 0) sum -= prefix[r1 - 1][c2];
    if (c1 > 0) sum -= prefix[r2][c1 - 1];
    if (r1 > 0 && c1 > 0) sum += prefix[r1 - 1][c1 - 1];

    cout << "Submatrix Sum = " << sum << endl;

    return 0;
}