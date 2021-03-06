class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if (grid.size()==0) return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> map=grid;
        for (int i = 1; i < rows; i++) map[i][0] += map[i-1][0];
        for (int j = 1; j < cols; j++) map[0][j] += map[0][j-1];     
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                map[i][j] += min (map[i-1][j], map[i][j-1]);
            }
        }
        return map[rows-1][cols-1];
    }
};