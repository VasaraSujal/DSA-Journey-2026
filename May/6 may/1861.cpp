class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {

        int m = box.size();
        int n = box[0].size();

        vector<vector<char>> ans(n, vector<char>(m));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans[j][m - 1 - i] = box[i][j];
            }
        }

        for(int col = 0; col < m; col++) {

            int bottom = n - 1;

            for(int row = n - 1; row >= 0; row--) {

                if(ans[row][col] == '*') {
                    bottom = row - 1;
                }

                else if(ans[row][col] == '#') {

                    swap(ans[row][col], ans[bottom][col]);

                    bottom--;
                }
            }
        }

        return ans;
    }
};