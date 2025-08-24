string gridChallenge(vector<string> grid) {
for (auto &row : grid) {
        sort(row.begin(), row.end());
    }
    int n = grid.size();
    int m = grid[0].size();
    for (int col = 0; col < m; col++) {
        for (int row = 1; row < n; row++) {
            if (grid[row][col] < grid[row - 1][col]) {
                return "NO";
            }
        }
    }
    return "YES";
}
