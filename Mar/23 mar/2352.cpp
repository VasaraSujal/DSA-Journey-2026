class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        // Approach : 1 =>

        // int n = grid.size();
        // int result = 0;

        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < n; j++) {

        //         int count = 0;

        //         for(int k = 0; k < n; k++) {
        //             if(grid[i][k] == grid[k][j]) {
        //                 count++;
        //             } else {
        //                 break;
        //             }
        //         }

        //         if(count == n) result++;
        //     }
        // }
        // return result;

        // Approach : 2 =>

        int n = grid.size();
        int result = 0;

        map<vector<int>, int> mp;
        for(int i=0;i<n;i++) {
            mp[grid[i]]++;
        }

        for(int i=0;i<n;i++) {
            vector<int> col;
            for(int j=0;j<n;j++) {
                col.push_back(grid[j][i]);
            }
            result += mp[col];
        }
        return result;
    }
};