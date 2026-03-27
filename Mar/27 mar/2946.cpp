class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> original = mat;
        vector<vector<int>> result(mat.size(), vector<int>(mat[0].size()));

        for (int z = 0; z < k; z++) {
            for (int i = 0; i < mat.size(); i++) {
                for (int j = 0; j < mat[0].size(); j++) {
                    if (i % 2 == 0) {
                        if (j == 0)
                            result[i][j] = mat[i][mat[0].size() - 1];
                        else
                            result[i][j] = mat[i][j - 1];
                    } else {
                        if (j == mat[0].size() - 1)
                            result[i][j] = mat[i][0];
                        else
                            result[i][j] = mat[i][j + 1];
                    }
                }
            }
            mat = result;
        }
        return mat == original;
    }
};