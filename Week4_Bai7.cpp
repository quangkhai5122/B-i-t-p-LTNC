#include <bits/stdc++.h>
using namespace std;
int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<char>> grid(rows, vector<char>(cols));
    int startY = -1;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 'Y') {
                startY = j;
            }
        }
    }
    for (int t = 0; t < rows; ++t) {
        for (int j = 0; j < cols; ++j) {
            if (grid[t][j] == 'R') {
                // Update rock position
                if (t < rows - 1) {
                    grid[t + 1][j] = 'R';
                }
                grid[t][j] = 'E';
            }
        }
    }
    bool canSurvive = true;
    for (int t = 0; t < rows; ++t) {
        int left = startY - 1;
        int right = startY + 1;

        if (left >= 0 && grid[t][left] == 'R') {
            canSurvive = false;
            break;
        }
        if (right < cols && grid[t][right] == 'R') {
            canSurvive = false;
            break;
        }
    }
    cout << (canSurvive ? "YES" : "NO") << endl;
    return 0;
}
