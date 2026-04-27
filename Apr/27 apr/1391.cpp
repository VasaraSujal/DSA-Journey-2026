class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        vector<vector<pair<int,int>>> dir = {
            {},                     
            {{0,-1},{0,1}},          
            {{-1,0},{1,0}},          
            {{0,-1},{1,0}},         
            {{0,1},{1,0}},           
            {{0,-1},{-1,0}},         
            {{0,1},{-1,0}}           
        };

        vector<vector<bool>> visited(m, vector<bool>(n, false));
        queue<pair<int,int>> q;
        q.push({0, 0});
        visited[0][0] = true;

        while (!q.empty()) {
            auto [r, c] = q.front(); 
            q.pop();

            if (r == m-1 && c == n-1) return true;

            for (auto [dr, dc] : dir[grid[r][c]]) {
                int nr = r + dr, nc = c + dc;

                if (nr < 0 || nr >= m || nc < 0 || nc >= n) continue;
                if (visited[nr][nc]) continue;

                bool connected = false;
                for (auto [br, bc] : dir[grid[nr][nc]]) {
                    if (br == -dr && bc == -dc) {
                        connected = true;
                        break;
                    }
                }

                if (connected) {
                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }

        return false;
    }
};